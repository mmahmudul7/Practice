SELECT DEPARTMENTS.DEPARTMENT_NAME, COUNT(EMPLOYEES.EMPLOYEE_ID) AS CNT
FROM DEPARTMENTS
	JOIN EMPLOYEES ON DEPARTMENTS.DEPARTMENT_ID = EMPLOYEES.DEPARTMENT_ID
GROUP BY DEPARTMENTS.DEPARTMENT_NAME;