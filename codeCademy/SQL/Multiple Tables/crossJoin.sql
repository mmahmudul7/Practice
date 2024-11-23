-- combine all rows of one table with all rows of another table.

SELECT shirts.shirt_color,
   pants.pants_color
FROM shirts
CROSS JOIN pants;

-- Notice that cross joins don’t require an ON statement. You’re not really joining on any columns!

SELECT COUNT(*)
FROM newspaper
WHERE start_month <= 3
  AND end_month >= 3;

SELECT *
FROM newspaper
CROSS JOIN months;

SELECT *
FROM newspaper
CROSS JOIN months
WHERE start_month <= month
  AND end_month >= month;

SELECT month,
   COUNT(*) AS 'subscribers'
FROM newspaper
CROSS JOIN months
WHERE start_month <= month 
   AND end_month >= month
GROUP BY month;