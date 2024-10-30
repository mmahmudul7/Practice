USE programminghero;

CREATE TABLE Employee_2 (
	EmpId CHAR(4) PRIMARY KEY,
    EmpName VARCHAR(50) NOT NULL,
    JoiningYear CHAR(4),
    Birthday YEAR CHECK(Birthday <= '2000-12-31'),
    Designation VARCHAR(15),
    Salary DECIMAL(10, 2) CHECK (Salary > 0)
);

INSERT INTO Employee_2 (EmpId, EmpName, JoiningYear, Birthday, Designation, Salary) VALUES 
('E001', 'Hasan Ali', '2018', '1995', 'Manager', 55000.00);

INSERT INTO Employee_2 (EmpId, EmpName, JoiningYear, Birthday, Designation, Salary) VALUES 
('E002', 'Mahmudul Hasan', '2017', '1999', 'Software Eng', 10000.00);

SELECT * FROM programminghero.Employee_2;