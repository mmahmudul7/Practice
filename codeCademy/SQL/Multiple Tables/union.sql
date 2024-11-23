-- Sometimes we just want to stack one dataset on top of the other. Well, the UNION operator allows us to do that.

-- Tables must have the same number of columns.
-- The columns must have the same data types in the same order as the first table.

SELECT * 
FROM newspaper 
UNION 
SELECT * 
FROM online;