-- 1. find who got second highest salary
-- way 1:
SELECT *
FROM EMPLOYEES
WHERE SALARY = (
				SELECT DISTINCT SALARY
                FROM EMPLOYEES
                ORDER BY SALARY DESC
                LIMIT 1
                OFFSET 1
				);
                
-- WAY 2:
SELECT *
FROM EMPLOYEES
WHERE SALARY = (
				SELECT MAX(SALARY)
                FROM EMPLOYEES
                WHERE SALARY < (
								SELECT MAX(SALARY)
                                FROM EMPLOYEES
								)
				);
                
-- 2. WHO GOT SALARY MORE THAN THIR MANAGER
SELECT *
FROM EMPLOYEES AS EMP
WHERE SALARY > (
				SELECT SALARY
                FROM EMPLOYEES AS MGR
                WHERE EMP.MANAGER_ID = MGR.EMPLOYEE_ID
				);
                
-- 3. WHO ARE DOING JOB AS LIKE THEIR MANGER
SELECT *
FROM EMPLOYEES AS EMP
WHERE JOB_ID = (
				SELECT JOB_ID
                FROM EMPLOYEES AS MGR
                WHERE EMP.MANAGER_ID = MGR.EMPLOYEE_ID
				);