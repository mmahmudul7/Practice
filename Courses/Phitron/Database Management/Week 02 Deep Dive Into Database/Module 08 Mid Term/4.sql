SELECT *
FROM EMPLOYEES
WHERE SALARY = (SELECT MAX(SALARY)
				FROM EMPLOYEES
				WHERE SALARY < (SELECT MAX(SALARY)
								FROM EMPLOYEES
								WHERE SALARY < (SELECT MAX(SALARY)
												FROM EMPLOYEES
												)
								)
				);