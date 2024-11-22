-- ORDER BY always goes after WHERE (if WHERE is present).
-- Checkpoint 1
SELECT name, year
FROM movies
ORDER BY name;

-- Checkpoint 2
SELECT name, year, imdb_rating
FROM movies
ORDER BY imdb_rating DESC;