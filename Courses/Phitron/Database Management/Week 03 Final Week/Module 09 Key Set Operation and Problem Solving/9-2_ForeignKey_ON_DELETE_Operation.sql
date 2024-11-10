CREATE TABLE Student(
	Roll VARCHAR(5) PRIMARY KEY,
    Name VARCHAR(50)
);

CREATE TABLE Course(
	Course_No VARCHAR(5) PRIMARY KEY,
    Course_Name VARCHAR(50)
);

-- MAKE RELATION
CREATE TABLE Enroll(
	Roll VARCHAR(5),
    Course_No VARCHAR(5),
    Date DATE,
    
    FOREIGN KEY (Roll) REFERENCES Student(Roll),
    FOREIGN KEY (Course_No) REFERENCES Student(Course_No)
);

-- MAKE RELATION with ON DELTE OPTION
CREATE TABLE Enroll(
	Roll VARCHAR(5),
    Course_No VARCHAR(5),
    Date DATE,
    
    FOREIGN KEY (Roll)
		REFERENCES Student(Roll) ON DELETE CASCADE,
    FOREIGN KEY (Course_No)
		REFERENCES Course(Course_No) ON DELETE CASCADE
);

-- MAKE RELATION with ON DELTE AND ON UPDATE OPTION
CREATE TABLE Enroll(
	Roll VARCHAR(5),
    Course_No VARCHAR(5),
    Date DATE,
    
    FOREIGN KEY (Roll)
		REFERENCES Student(Roll)
        ON DELETE CASCADE
        ON UPDATE CASCADE,
        
    FOREIGN KEY (Course_No)
		REFERENCES Course(Course_No)
        ON DELETE CASCADE
        ON UPDATE CASCADE
);

-- MAKE RELATION with ON DELTE, ON UPDATE OPTION AND SET NULL OR ANY VALUES
CREATE TABLE Enroll(
	Roll VARCHAR(5),
    Course_No VARCHAR(5),
    Date DATE,
    
    FOREIGN KEY (Roll)
		REFERENCES Student(Roll)
        ON DELETE SET NULL
        ON UPDATE CASCADE,
        
    FOREIGN KEY (Course_No)
		REFERENCES Course(Course_No)
        ON DELETE SET NULL
        ON UPDATE CASCADE
);