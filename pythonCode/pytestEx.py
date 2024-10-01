# content of test_assert1.py
def foo():
    return 3


def test_function():
    assert foo() == 4, "return code of foo didn't match the expected value"
