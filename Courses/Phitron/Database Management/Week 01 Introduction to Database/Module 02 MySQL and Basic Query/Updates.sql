USE ProgrammingHero;

SET SQL_SAFE_UPDATES = 0;

UPDATE student
SET Name = 'MD Mahmudul Hasan'
WHERE Roll = 1;

SET SQL_SAFE_UPDATES = 1;

SELECT * FROM ProgrammingHero.Student;