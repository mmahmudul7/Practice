'''
Primary keys have a few requirements:

None of the values can be NULL.
Each value must be unique.
A table can not have more than one primary key column.

Foreign key:
When the primary key for one table appears in a different table, it is called a foreign key.
'''

SELECT *
FROM classes
INNER JOIN students
  ON classes.id = students.class_id;

