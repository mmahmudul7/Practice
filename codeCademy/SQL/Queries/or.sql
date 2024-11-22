-- Checkpoint 1
SELECT *
FROM movies
WHERE year > 2014
   OR genre = 'action';

-- Checkpoint 2
SELECT *
FROM movies
WHERE genre = 'romance'
   OR genre = 'comedy';