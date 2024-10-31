USE programminghero;

CREATE TABLE Student (
	Roll CHAR(4) PRIMARY KEY,
    Name VARCHAR(50) NOT NULL,
    Email VARCHAR(60) UNIQUE,
    Address VARCHAR(255),
    Phone VARCHAR(15) DEFAULT 'Not given',
    Age INT CHECK(Age >= 10)
);

INSERT INTO Student(Roll, Name, Email, Address, Age) VALUES ('0001', 'Hasan', 'hasan@gamil.com', 'Uttra, Dhaka', 11);
INSERT INTO Student(Roll, Name, Email, Address, Age) VALUES ('0002', 'Mahmud', 'mahmud@gamil.com', 'Asad Gate, Dhaka', 12);
INSERT INTO Student(Roll, Name, Email, Phone, Age) VALUES ('0003', 'Shamim', 'sahmim@gamil.com', '017' , 13);

-- See all Data of Hasan
SELECT *
FROM student
WHERE name = 'Hasan';

-- See phone number of Roll Number 0003
SELECT Phone
FROM student
WHERE Roll = '0003';

-- See all Data
SELECT * FROM student;
