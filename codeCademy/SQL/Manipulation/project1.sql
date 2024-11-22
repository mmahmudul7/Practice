CREATE TABLE friends (
  id INTEGER,
  name TEXT,
  birthday DATE
);

INSERT INTO friends (id, name, birthday) VALUES (1, 'Ororo Munroe', '1940-05-30');

INSERT INTO friends (id, name, birthday) VALUES (2, 'Mahmudul Hasan', '1990-07-04'),
(3, 'Hasan Shamim', '1980-01-25');

UPDATE friends
SET name = 'Storm'
WHERE id = 1;

ALTER TABLE friends
ADD COLUMN email text;

UPDATE friends
SET email = 'storm@codecademy.com';

DELETE FROM friends
WHERE id = 1;

SELECT *
FROM friends;