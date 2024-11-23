-- MAX()takes the name of a column as an argument and returns the largest value in that column.

-- MIN() function return the lowest values in a column.

SELECT MAX(downloads)
FROM fake_apps;

SELECT MIN(downloads)
FROM fake_apps;

SELECT MAX(price)
FROM fake_apps;