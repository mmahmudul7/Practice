-- In addition to being able to group data using GROUP BY, SQL also allows you to filter which groups to include and which to exclude.

-- We can’t use WHERE here because we don’t want to filter the rows; we want to filter groups.

-- HAVING statement always comes after GROUP BY, but before ORDER BY and LIMIT

SELECT price, 
   ROUND(AVG(downloads)),
   COUNT(*)
FROM fake_apps
GROUP BY price
HAVING COUNT(*) > 10;