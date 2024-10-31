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

-- See all Roll numebrs who got CSE Mark Above 20 or equal
SELECT Roll
FROM Marks
WHERE CSE >= '20';

-- ----------------------
SELECT Roll
FROM Marks
WHERE CSE <> '20';

-- See all Data
SELECT * FROM Marks;
