SELECT e1.first_name, e2.first_name, e1.manager_id
FROM employees AS e1
	JOIN employees AS e2
	ON e1.manager_id = e2.manager_id
	AND e1.employee_id <> e2.employee_id;