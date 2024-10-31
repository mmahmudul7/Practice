CREATE TABLE Employee4(
	Id INT PRIMARY KEY,
    Name VARCHAR(50),
    Desig VARCHAR(20),
    Age INT,
    Salary DECIMAL(10, 2)    
);

INSERT INTO Employee4
(Id, Name, Desig, Age, Salary) VALUES
(1, 'Mahmud', 'Jr SWE', '20', 20000.00),
(2, 'Hasan', 'Sr SWE', '30', 50000.00),
(3, 'Shamim', 'Pr Mgr', '40', 60000.00),
(4, 'Kader', 'Team Lead', '50', 55000.00),
(5, 'Khan', 'Sr SWE', '32', 52000.00);

-- Syntax squence 
/*
SELECT
FROM
WHERE
ORDER BY
LIMIT
OFFSET
*/

-- Show all data of given Ids only
SELECT *
FROM Employee4
WHERE Id IN (1, 3, 5);

-- Do not show data of given IDs 
SELECT *
FROM Employee4
WHERE Id NOT IN (1, 3, 5);

-- Show all data, whoes name start from K
SELECT *
FROM Employee4 
WHERE Name LIKE 'K%';

-- find the data of employee whose name has second letter a.
SELECT *
FROM Employee4 
WHERE Name LIKE '_a%';

SELECT *
FROM Employee4 
WHERE Desig LIKE '%r S%';

SELECT Name AS EmployeeName, Age AS EmployeeAge 
FROM Employee4;

SELECT * FROM programminghero.employee4;