from employee import Employee

def test_give_default_raise():
    employee = Employee('mahmud', 'hasan', 65_000)
    employee.give_raise()
    assert employee.annual_salary == 70_000

def test_give_custom_raise():
    employee = Employee('mahmud', 'hasan', 65_000)
    employee.give_raise(10000)
    assert employee.annual_salary == 75_000
