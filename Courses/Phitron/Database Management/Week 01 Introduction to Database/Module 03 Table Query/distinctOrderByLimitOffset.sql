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

-- Show designations of the company
SELECT DISTINCT Desig
FROM Employee4;

-- Show Names Order by their Age
SELECT Name
FROM Employee4
ORDER BY Age ASC;

SELECT Name
FROM Employee4
ORDER BY Age DESC;

-- Show Names Order by their Age
SELECT Name
FROM Employee4
ORDER BY Age ASC;

SELECT * FROM programminghero.employee4;