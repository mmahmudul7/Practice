WITH AVG_SALARY AS (
    SELECT AVG(SALARY) AS Sal
    FROM EMPLOYEES
)
SELECT EMPLOYEES.FIRST_NAME, EMPLOYEES.SALARY
FROM EMPLOYEES
	JOIN AVG_SALARY ON EMPLOYEES.SALARY > AVG_SALARY.SAL;