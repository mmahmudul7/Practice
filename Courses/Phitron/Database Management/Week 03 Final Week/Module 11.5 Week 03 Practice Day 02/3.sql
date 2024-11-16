-- Create table for Students
CREATE TABLE Students (
    StudentID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    ClassID INT NOT NULL,
    DateOfBirth DATE,
    Address VARCHAR(255),
    FOREIGN KEY (ClassID) REFERENCES Classes(ClassID)
);

-- Create table for Classes
CREATE TABLE Classes (
    ClassID INT AUTO_INCREMENT PRIMARY KEY,
    ClassName VARCHAR(50) NOT NULL,
    TeacherID INT NOT NULL,
    FOREIGN KEY (TeacherID) REFERENCES Teachers(TeacherID)
);

-- Create table for Teachers
CREATE TABLE Teachers (
    TeacherID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    Subject VARCHAR(50),
    Email VARCHAR(100) UNIQUE
);

-- Create table for Attendance
CREATE TABLE Attendance (
    AttendanceID INT AUTO_INCREMENT PRIMARY KEY,
    StudentID INT NOT NULL,
    ClassID INT NOT NULL,
    AttendanceDate DATE NOT NULL,
    Status ENUM('Present', 'Absent') NOT NULL,
    FOREIGN KEY (StudentID) REFERENCES Students(StudentID),
    FOREIGN KEY (ClassID) REFERENCES Classes(ClassID)
);