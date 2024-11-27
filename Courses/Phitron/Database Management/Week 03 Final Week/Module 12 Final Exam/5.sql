SELECT Student.Name, COUNT(Enrollment.CourseID) AS Cnt
FROM Student
JOIN Enrollment ON Student.StudentID = Enrollment.StudentID
GROUP BY Student.StudentID, Student.Name
HAVING COUNT(Enrollment.CourseID) > 2;