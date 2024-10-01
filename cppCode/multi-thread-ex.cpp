#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

// Example classes for Sensor and MQTT
class Sensor
{
public:
    int readData()
    {
        // Simulate sensor reading
        return (rand() % 100);
    }
};

class MQTTClient
{
public:
    void publishData(int data)
    {
        // Simulate MQTT data publishing
        std::cout << "Publishing data to MQTT: " << data << std::endl;
    }
};

class SensorDataProcessor
{
public:
    void processData(int data)
    {
        // Add your data processing logic here
        // For simplicity, just print the data
        std::cout << "Processing data: " << data << std::endl;
    }
};

class SensorMQTTController
{
private:
    Sensor sensor;
    MQTTClient mqttClient;
    SensorDataProcessor dataProcessor;

    std::thread sensorThread;
    std::thread mqttThread;

    std::mutex mutex;
    std::condition_variable cv;

    std::queue<int> dataQueue;

    bool stopThreads;

public:
    SensorMQTTController() : stopThreads(false) {}

    void start()
    {
        // Start threads
        sensorThread = std::thread(&SensorMQTTController::sensorThreadFunction, this);
        mqttThread = std::thread(&SensorMQTTController::mqttThreadFunction, this);
    }

    void stop()
    {
        {
            std::unique_lock<std::mutex> lock(mutex);
            stopThreads = true;
        }

        // Notify threads to stop
        cv.notify_all();

        // Join threads
        sensorThread.join();
        mqttThread.join();
    }

private:
    void sensorThreadFunction()
    {
        while (true)
        {
            // Read data from the sensor
            int data = sensor.readData();

            {
                std::unique_lock<std::mutex> lock(mutex);
                // Process the data
                dataProcessor.processData(data);

                // Enqueue data for MQTT publishing
                dataQueue.push(data);
            }

            // Notify MQTT thread
            cv.notify_one();

            // Sleep for some time before the next sensor reading
            std::this_thread::sleep_for(std::chrono::milliseconds(100));

            {
                std::unique_lock<std::mutex> lock(mutex);
                if (stopThreads)
                {
                    break;
                }
            }
        }
    }

    void mqttThreadFunction()
    {
        while (true)
        {
            std::unique_lock<std::mutex> lock(mutex);

            // Wait for data to be available
            cv.wait(lock, [this]
                    { return !dataQueue.empty() || stopThreads; });

            if (stopThreads)
            {
                break;
            }

            // Dequeue data for MQTT publishing
            int data = dataQueue.front();
            dataQueue.pop();

            // Publish data over MQTT
            mqttClient.publishData(data);
        }
    }
};

int main()
{
    SensorMQTTController controller;
    controller.start();

    // Run the application for a while
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    // Stop the application
    controller.stop();

    return 0;
}
