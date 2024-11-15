SELECT DEPARTMENTS.DEPARTMENT_NAME, EMPLOYEES.FIRST_NAME AS MANAGER
FROM DEPARTMENTS
	JOIN EMPLOYEES ON DEPARTMENTS.MANAGER_ID = EMPLOYEES.EMPLOYEE_ID;