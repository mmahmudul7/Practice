SELECT * FROM EMPLOYEES;
SELECT * FROM DEPARTMENTS;

-- INNER JOIN
SELECT EMPLOYEES.FIRST_NAME, DEPARTMENTS.DEPARTMENT_NAME
FROM EMPLOYEES
	INNER JOIN DEPARTMENTS ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;

-- LEFT JOIN
SELECT DEPARTMENTS.DEPARTMENT_NAME
FROM DEPARTMENTS
	LEFT JOIN EMPLOYEES
			ON DEPARTMENTS.DEPARTMENT_ID = EMPLOYEES.DEPARTMENT_ID
WHERE EMPLOYEES.DEPARTMENT_ID IS NULL;

-- RIGHT JOIN
SELECT EMPLOYEES.FIRST_NAME, DEPARTMENTS.DEPARTMENT_NAME
FROM EMPLOYEES
	RIGHT JOIN DEPARTMENTS ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;

-- CROSS JOIN
SELECT EMPLOYEES.FIRST_NAME, DEPARTMENTS.DEPARTMENT_NAME
FROM EMPLOYEES
	CROSS JOIN DEPARTMENTS ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;