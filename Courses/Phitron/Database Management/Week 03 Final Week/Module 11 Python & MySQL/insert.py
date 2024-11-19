import mysql.connector

db_name = "python_test_db"

myDbConnection = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "password",
    database = db_name
)

myCursor = myDbConnection.cursor()

sqlQuery = """
            INSERT INTO Student(Roll, Name) VALUES 
            ('1001', 'Mahmudul Hasan'),
            ('1002', 'Hasan Shamim'),
            ('1003', 'Shamim Khan');
            """

myCursor.execute(sqlQuery)
myDbConnection.commit()

print("Create table sucessful!")