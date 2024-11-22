SELECT *
FROM movies
WHERE year BETWEEN 1970 AND 1979
  AND imdb_rating > 8;


SELECT *
FROM movies
WHERE year < 1985
  AND genre = 'horror';