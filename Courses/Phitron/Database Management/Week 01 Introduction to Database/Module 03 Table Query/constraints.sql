USE programminghero;

-- this is syntax of sql comment

-- Way 1:
CREATE TABLE Student (
	Roll CHAR(4) PRIMARY KEY,
    Name VARCHAR(50) NOT NULL,
    Email VARCHAR(60) UNIQUE,
    Address VARCHAR(255),
    Phone VARCHAR(15) DEFAULT 'Not given',
    Age INT CHECK(Age >= 10)
);

-- Way 2:
CREATE TABLE Student (
	Roll CHAR(4),
    Name VARCHAR(50),
    Email VARCHAR(60),
    Address VARCHAR(255),
    Phone VARCHAR(15),
    Age INT
    -- PRIMARY KEY(Roll),
    -- UNIQUE(Email),
    -- DEFAULT 'Not given'(Phone),
    CHECK(Age >= 10)
);

-- Way 3:
CREATE TABLE Student (
	Roll CHAR(4),
    Name VARCHAR(50),
    Email VARCHAR(60),
    Address VARCHAR(255),
    Phone VARCHAR(15),
    Age INT
    
    -- Constraint pk_rule (Roll),
    -- Constraint unique_rule UNIQUE (Email),
    -- Constraint  default_rule DEFAULT 'Not given'(Phone),
    -- Constraint checking_rule CHECK(Age >= 10)
);

INSERT INTO Student(Roll, Name, Email, Address, Age) VALUES ('0001', 'Hasan', 'hasan@gamil.com', 'Uttra, Dhaka', 11);
INSERT INTO Student(Roll, Name, Email, Address, Age) VALUES ('0002', 'Mahmud', 'Mahmud@gamil.com', 'Asad Gate, Dhaka', 12);
INSERT INTO Student(Roll, Name, Email, Phone, Age) VALUES ('0003', 'Shamim', 'sahmim@gamil.com', '017' , 13);

SELECT * FROM programminghero.student;
SELECT * FROM programminghero.Library;

-- 2nd table 
CREATE TABLE Library (
	BookName VARCHAR(50) PRIMARY KEY,
    WhoHired_Roll CHAR(4),
    
    FOREIGN KEY(WhoHired_Roll) REFERENCES Student(Roll)
);

-- Composite Primary Key:
CREATE TABLE Course (
	CourseName VARCHAR(10),
    University VARCHAR(10),
    Credit INT,
    
    PRIMARY KEY(CourseName, University)
);

INSERT INTO Course(CourseName, University, Credit) VALUES ('CSE 101', 'DU', 4);
INSERT INTO Course(CourseName, University, Credit) VALUES ('CSE 101', 'BUET', 3);
INSERT INTO Course(CourseName, University, Credit) VALUES ('EEE 101', 'DU', 3);

SELECT * FROM programminghero.Course;