SELECT COUNT(*) AS total_employees, 
    SUM(salary) AS total_salary, 
    AVG(salary) AS avg_salary, 
    MIN(salary) AS min_salary, 
    MAX(salary) AS max_salary
FROM EMPLOYEES;