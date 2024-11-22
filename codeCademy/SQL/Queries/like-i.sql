-- The _ means you can substitute any individual character here without breaking the pattern. The names Seven and Se7en both match this pattern.

SELECT * 
FROM movies
WHERE name LIKE 'Se_en';