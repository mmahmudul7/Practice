SELECT * FROM DEPARTMENTS;
SELECT * FROM LOCATIONS;

SELECT DISTINCT LOCATIONS.CITY
FROM DEPARTMENTS
	JOIN LOCATIONS ON DEPARTMENTS.LOCATION_ID = LOCATIONS.LOCATION_ID;