SELECT Instructor.Name, SUM(Course.Credits) AS TotalCredits
FROM Instructor
JOIN Course ON Instructor.InstructorID = Course.InstructorID
GROUP BY Instructor.InstructorID, Instructor.Name
ORDER BY TotalCredits DESC
LIMIT 1;