-- 3. Which employee has been hired after Steven?
SELECT *
FROM EMPLOYEES;

SELECT *
FROM EMPLOYEES
ORDER BY HIRE_DATE ASC
LIMIT 1
OFFSET 1;

SELECT * 
FROM Employees
WHERE hire_date > (
					SELECT hire_date 
                    FROM Employees
                    WHERE first_name = 'Steven'
                    LIMIT 1
					);
