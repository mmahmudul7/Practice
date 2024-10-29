CREATE TABLE Employee(
	EmployeeId INT PRIMARY KEY,
    EmployeeName VARCHAR(50),
    EmployeeSalary DECIMAL(10, 2),
    JoiningDate DATE
);

INSERT INTO employee
(EmployeeId, EmployeeName, EmployeeSalary, JoiningDate) VALUES(1, 'Mahmud', 10000.00, '2024-01-01');

INSERT INTO employee
(EmployeeId, EmployeeName, EmployeeSalary, JoiningDate) VALUES(2, 'Hasan', 12000.00, '2022-01-08');

DELETE FROM employee
WHERE EmployeeId = 2;

SELECT * FROM programminghero.employee;