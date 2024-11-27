INSERT INTO Enrollment (StudentID, CourseID, EnrollmentDate)
SELECT 5, CourseID, '2024-11-17'
FROM Course
ORDER BY Credits DESC
LIMIT 1;

select * from course;
select * from Enrollment;
select * from instructor;
select * from student;

SELECT * FROM Course ORDER BY Credits DESC;

SET FOREIGN_KEY_CHECKS = 0;

INSERT INTO Course (Title, Credits, InstructorID) 
VALUES ('Database Systems', 4, 1), 
       ('Operating Systems', 3, 2);

SET FOREIGN_KEY_CHECKS = 1;


INSERT INTO Student (Name, Email, Phone) 
VALUES ('Hasan', 'hasan@example.com', '01700000000');

INSERT INTO Student (Name, Email, Phone) 
VALUES ('mahhmud', 'mahmud@example.com', '01710000000'),
		('shamim', 'shamim@example.com', '01701000000'),
        ('kader', 'kader@example.com', '01700001000'),
        ('khan', 'khan@example.com', '01700000010'),
        ('san', 'san@example.com', '01700000001')
;

INSERT INTO Course (Title, Credits, InstructorID) 
VALUES ('Database Systems', 4, 1), 
       ('Operating Systems', 3, 2);
       
INSERT INTO Instructor (Name, Email, Phone, Department)
VALUES ('Hasan', 'hasan@example.com', '01700000000', 'CSE'),
       ('Shamim', 'shamim@example.com', '01800000000', 'IT');

       
SELECT * FROM Student WHERE StudentID = 5;
