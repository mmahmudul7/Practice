CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Age INT,
    Department VARCHAR(50)
);

INSERT INTO Employee (EmployeeID, FirstName, LastName, Age, Department) VALUES
(1, 'John', 'Doe', 28, 'Sales'),
(2, 'Jane', 'Smith', 32, 'Marketing'),
(3, 'Michael', 'Johnson', 35, 'Finance'),
(4, 'Sarah', 'Brown', 30, 'HR'),
(5, 'William', 'Davis', 25, 'Engineering'),
(6, 'Emily', 'Wilson', 28, 'Sales'),
(7, 'Robert', 'Lee', 33, 'Marketing'),
(8, 'Laura', 'Hall', 29, 'Finance'),
(9, 'Thomas', 'White', 31, 'HR'),
(10, 'Olivia', 'Clark', 27, 'Engineering');

SELECT * FROM exams.employee;

-- 5. Write a query to show the distinct department names
SELECT DISTINCT Department
FROM Employee;

-- 6. Write a query to show the LastNames of the employees sorted by  descending ages
SELECT LastName
FROM Employee
ORDER BY LastName DESC;

-- 7. Write a query to show the employee LastName whose age is greater than 30 and works in Marketing department.
SELECT LastName
FROM Employee
WHERE Age > 30 AND Department = 'Marketing';

-- 8. Write a query to select all the employees
SELECT *
FROM Employee;

-- 9. Write a query to get employees whose names includes ‘son’ 
SELECT *
FROM Employee
WHERE FirstName LIKE '%son%' OR LastName LIKE '%son%';

-- 10. Write a query to get the engineers
SELECT *
FROM Employee
WHERE Department = 'Engineering';