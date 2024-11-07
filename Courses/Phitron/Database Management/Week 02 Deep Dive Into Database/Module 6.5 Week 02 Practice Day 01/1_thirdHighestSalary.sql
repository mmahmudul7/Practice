-- 1. Determine the third highest salary and which employee receives it?
                
SELECT *
FROM EMPLOYEES
WHERE SALARY = (
				SELECT MAX(SALARY)
				FROM EMPLOYEES
				WHERE SALARY < (
								SELECT MAX(SALARY)
								FROM EMPLOYEES
								WHERE SALARY < (
												SELECT MAX(SALARY)
												FROM EMPLOYEES
												)
								)
				);