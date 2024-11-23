-- ROUND() function takes two arguments inside the parenthesis:
-- 1. a column name
-- 2. an integer

SELECT ROUND(AVG(price), 2)
FROM fake_apps;

-- AVG(price) is the 1st argument and 2 is the 2nd argument because we want to round it to two decimal places: