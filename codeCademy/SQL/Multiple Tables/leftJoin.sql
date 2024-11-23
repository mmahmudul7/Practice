-- A left join will keep all rows from the first table, regardless of whether there is a matching row in the second table.

-- Omit the un-matched row from the second table.

SELECT *
FROM newspaper
LEFT JOIN online
  ON newspaper.id = online.id;


SELECT *
FROM newspaper
LEFT JOIN online
  ON newspaper.id = online.id
WHERE online.id IS NULL;

-- WHERE clause goes after the LEFT JOIN.