-- Sometimes, we want to GROUP BY a calculation done on a column.

SELECT ROUND(imdb_rating),
   COUNT(name)
FROM movies
GROUP BY 1
ORDER BY 1;

-- Here, the 1 refers to the first column in our SELECT statement, ROUND(imdb_rating).

SELECT category, 
   price,
   AVG(downloads)
FROM fake_apps
GROUP BY 1, 2;

-- Even if you use column names instead of numbers, it will still be correct because these two queries are exactly the same!