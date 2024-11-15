-- Student
CREATE TABLE Student (
    student_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    age INT,
    email VARCHAR(100) UNIQUE
);

-- Course
CREATE TABLE Course (
    course_id INT AUTO_INCREMENT PRIMARY KEY,
    course_name VARCHAR(100) NOT NULL,
    credits INT NOT NULL
);

-- Enroll
CREATE TABLE Enroll (
    enroll_id INT AUTO_INCREMENT PRIMARY KEY,
    student_id INT,
    course_id INT,
    enrollment_date DATE NOT NULL,
    
    -- Student + FOREIGN KEY
    CONSTRAINT fk_student FOREIGN KEY (student_id) 
        REFERENCES Student(student_id) 
        ON DELETE CASCADE,
    
    -- Course + FOREIGN KEY
    CONSTRAINT fk_course FOREIGN KEY (course_id) 
        REFERENCES Course(course_id) 
        ON DELETE SET NULL
);