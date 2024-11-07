-- 1
WITH THIRD_MAX_SALARY AS (
	SELECT MAX(SALARY) AS SALARY
    FROM Employees
    WHERE SALARY < (
					SELECT MAX(SALARY)
                    FROM Employees
                    WHERE SALARY < (
									SELECT MAX(SALARY)
                                    FROM Employees
                                    )
					)
	)

SELECT *
FROM Employees
WHERE SALARY = (
				SELECT SALARY
                FROM THIRD_MAX_SALARY
                );

-- 2
WITH THIRD_MIN_SALARY AS (
	SELECT MIN(SALARY) AS SALARY
    FROM Employees
    WHERE SALARY > (
					SELECT MIN(SALARY)
                    FROM Employees
                    WHERE SALARY > (
									SELECT MIN(SALARY)
                                    FROM Employees
                                    )
					)
	)

SELECT *
FROM Employees
WHERE SALARY = (
				SELECT SALARY
                FROM THIRD_MIN_SALARY
                );