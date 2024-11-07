-- 2. Determine the third lowest salary and which employee receives it?
                
SELECT *
FROM EMPLOYEES
WHERE SALARY = (
				SELECT MIN(SALARY)
				FROM EMPLOYEES
				WHERE SALARY > (
								SELECT MIN(SALARY)
								FROM EMPLOYEES
								WHERE SALARY > (
												SELECT MIN(SALARY)
												FROM EMPLOYEES
												)
								)
				);