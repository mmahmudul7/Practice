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
            CREATE TABLE Student(
                    Roll varchar(4),
                    Name varchar(50)
            )
            """

myCursor.execute(sqlQuery)

print("Create table sucessful!")