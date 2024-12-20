SELECT * FROM employees;

-- 1. UNION
SELECT * FROM EMPLOYEES
WHERE SALARY > 12000
UNION
SELECT * FROM EMPLOYEES
WHERE DEPARTMENT_ID = 20;

-- 2. UNION ALL
SELECT * FROM EMPLOYEES
WHERE SALARY > 12000
UNION ALL
SELECT * FROM EMPLOYEES
WHERE DEPARTMENT_ID = 20;

-- 3. INTERSECT
SELECT * FROM EMPLOYEES
WHERE SALARY > 12000
INTERSECT
SELECT * FROM EMPLOYEES
WHERE DEPARTMENT_ID = 20;

-- 4. MINUS / EXCEPT
SELECT * FROM EMPLOYEES
WHERE SALARY > 12000
EXCEPT
SELECT * FROM EMPLOYEES
WHERE DEPARTMENT_ID = 20;