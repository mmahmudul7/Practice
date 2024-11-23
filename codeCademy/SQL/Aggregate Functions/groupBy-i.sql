-- GROUP BY is a clause in SQL that is used with aggregate functions. It is used in collaboration with the SELECT statement to arrange identical data into groups.

-- The GROUP BY statement comes after any WHERE statements, but before ORDER BY or LIMIT.

SELECT price, COUNT(*) 
FROM fake_apps
GROUP BY price;

SELECT price, COUNT(*) 
FROM fake_apps
WHERE downloads > 20000
GROUP BY price;

SELECT category, SUM(downloads)
FROM fake_apps
GROUP BY category;