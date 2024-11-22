-- A CASE SQL’s way of handling if-then logic.

SELECT name,
 CASE
  WHEN genre = 'romance' THEN 'Chill'
  WHEN genre = 'comedy' THEN 'Chill'
  ELSE 'Intense'
 END AS 'Mood'
FROM movies;

-- 2nd method
SELECT name,
 CASE
  WHEN genre = 'romance' OR genre = 'comedy' 
   THEN 'Chill'
  ELSE 'Intense'
 END AS 'Mood'
FROM movies;