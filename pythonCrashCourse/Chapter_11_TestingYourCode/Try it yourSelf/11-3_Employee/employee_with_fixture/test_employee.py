import pytest
from employee import Employee

@pytest.fixture
def employee():
    employee = Employee('mahmud', 'hasan', 65_000)
    return employee

def test_give_default_raise(employee):
    employee.give_raise()
    assert employee.annual_salary == 70_000

def test_give_custom_raise(employee):
    employee.give_raise(10000)
    assert employee.annual_salary == 75_000
