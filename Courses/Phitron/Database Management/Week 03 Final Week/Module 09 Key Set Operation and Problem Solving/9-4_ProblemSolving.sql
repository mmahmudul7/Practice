-- 1. https://leetcode.com/problems/duplicate-emails/
SELECT Email 
FROM PERSON
GROUP BY EMAIL
HAVING COUNT(EMAIL) > 1;

-- 2. https://leetcode.com/problems/employees-earning-more-than-their-managers/
SELECT EMP.NAME AS Employee
FROM EMPLOYEE AS EMP, EMPLOYEE AS MGR
WHERE EMP.MANAGERID = MGR.ID AND EMP.SALARY > MGR.SALARY;

-- 3. https://leetcode.com/problems/customers-who-never-order/
SELECT CUSTOMERS.NAME AS CUSTOMERS
FROM CUSTOMERS
	LEFT JOIN ORDERS
		ON CUSTOMERS.ID = ORDERS.CUSTOMERID
GROUP BY CUSTOMERS.ID
HAVING COUNT(ORDERS.ID) = 0;
    
