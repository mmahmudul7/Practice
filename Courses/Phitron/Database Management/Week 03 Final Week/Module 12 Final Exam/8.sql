SELECT DISTINCT Salary
FROM Instructor
ORDER BY Salary DESC
LIMIT 1 OFFSET 1;

SELECT MAX(Salary) AS SecondHighestSalary
FROM Instructor
WHERE Salary < (SELECT MAX(Salary) FROM Instructor);
