-- LIMIT always goes at the very end of the query.

SELECT *
FROM movies
ORDER BY imdb_rating DESC
LIMIT 3;