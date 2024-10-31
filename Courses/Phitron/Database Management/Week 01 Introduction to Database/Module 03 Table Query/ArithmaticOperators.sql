USE programminghero;

CREATE TABLE Marks (
	Roll CHAR(4) PRIMARY KEY,
    CSE INT CHECK(CSE >= 0),
    ME INT CHECK(ME >= 0)
);

INSERT INTO Marks(Roll, CSE, ME) VALUES
('102', '100', '60'),
('103', '10', '70'),
('104', '20', '50'),
('105', '90', '95');

-- See all Total Marks of Roll 103
SELECT CSE + ME
FROM Marks
WHERE Roll = '103';

-- ----------------------
SELECT CSE + ME, CSE - ME, (CSE + ME) / 2, CSE % 10
FROM Marks;
-- WHERE Roll = '103';

-- See all Data
SELECT * FROM Marks;
