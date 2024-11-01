USE Exams;

CREATE TABLE Student (
    Roll CHAR(4) PRIMARY KEY,
    Name VARCHAR(50) NOT NULL,
    Email VARCHAR(60) UNIQUE,
    Address VARCHAR(255),
    Phone VARCHAR(15) DEFAULT 'Not given',
    Age INT CHECK(Age >= 10)
);

CREATE TABLE Library (
    BookName VARCHAR(50) PRIMARY KEY,
    WhoHired_Roll CHAR(4),
   
    FOREIGN KEY(WhoHired_Roll) REFERENCES Student(Roll)
);

CREATE TABLE Fees(
    StudentRoll CHAR(4),
    Fee INT CHECK(Fee > 0),
   
    FOREIGN KEY(StudentRoll) REFERENCES Library (WhoHired_Roll)
);
