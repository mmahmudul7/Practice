CREATE TABLE Employee3(
	Id INT PRIMARY KEY,
    Name VARCHAR(50),
    Salary DECIMAL(10, 2),
    JoiningYear YEAR,
    Age INT
);

INSERT INTO Employee3
(Id, Name, Salary, JoiningYear, Age) VALUES
(1, 'Mahmud', 50000.00, '2021', 40),
(2, 'Hasan', 20000.00, '2023', 30),
(3, 'Shamim', 10000.00, '2023', 20),
(4, 'Kader', 15000.00, '2022', 25);

-- Show the Name and Salary for Age is less than 30 and Salaray more than 12000
SELECT Name, Salary
FROM Employee3
WHERE Age < 30 AND Salary > 12000;

-- Show data for Salaray more than 12000 or Age less than 25 but Salary is more than 10000
SELECT *
FROM Employee3
WHERE Salary > 12000 OR (Age > 25 AND Salary > 10000);

SELECT * FROM programminghero.employee3;