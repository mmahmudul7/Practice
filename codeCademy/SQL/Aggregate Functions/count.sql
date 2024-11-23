-- counts the number of non-empty values in that column.

SELECT COUNT(*) 
FROM fake_apps
WHERE price = 0;