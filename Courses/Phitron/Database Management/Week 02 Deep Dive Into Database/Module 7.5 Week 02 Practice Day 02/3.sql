-- 3. Show the name of the employee and the job_title who receives the maximum salary

SELECT EMPLOYEES.FIRST_NAME, EMPLOYEES.LAST_NAME, JOBS.JOB_TITLE
FROM EMPLOYEES 
	JOIN JOBS
		ON EMPLOYEES.JOB_ID = JOBS.JOB_ID
        WHERE EMPLOYEES.SALARY = (SELECT MAX(SALARY)
								  FROM EMPLOYEESS
								);