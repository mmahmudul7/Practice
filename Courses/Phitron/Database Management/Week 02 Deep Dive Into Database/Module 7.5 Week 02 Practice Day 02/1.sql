-- 1. Show the employee names and corresponding job_titles without using JOIN query

SELECT * FROM EMPLOYEES;
SELECT * FROM JOBS;

SELECT EMPLOYEES.FIRST_NAME, EMPLOYEES.LAST_NAME, JOBS.JOB_TITLE
FROM EMPLOYEES, JOBS
WHERE EMPLOYEES.JOB_ID = JOBS.JOB_ID;