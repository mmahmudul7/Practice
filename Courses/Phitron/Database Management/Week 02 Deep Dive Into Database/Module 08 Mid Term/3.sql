CREATE TABLE Employees (
	Employee_Id INT PRIMARY KEY,
    First_Name VARCHAR(50),
    Last_Name VARCHAR(50),
    Date_of_Birth DATE,
    Department_Id INT,
    Salary DECIMAL(10, 2)
);


CREATE TABLE Projects (
    Project_Id INT PRIMARY KEY,
    Project_Name VARCHAR(50),
    Start_Date DATE,
    End_Date DATE,
    Budget DECIMAL(12, 2)
);

CREATE TABLE Employee_Projects (
    Employee_Id INT,
    Project_Id INT,
    PRIMARY KEY (Employee_Id, Project_Id),

    FOREIGN KEY (Employee_Id) REFERENCES Employees(Employee_Id),
    FOREIGN KEY (Project_Id) REFERENCES Projects(Project_Id) 
);
