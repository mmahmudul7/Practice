SELECT
	EMPLOYEES.FIRST_NAME,
    EMPLOYEES.SALARY,
    (SELECT AVG(SALARY) FROM EMPLOYEES WHERE DEPARTMENT_ID = EMPLOYEES.DEPARTMENT_ID) - EMPLOYEES.SALARY AS DIFF_OF_SAL
    
FROM EMPLOYEES
	JOIN DEPARTMENTS ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;