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
            UPDATE Student
            SET NAME = 'MHS'
            WHERE NAME = 'Mahmudul Hasan';
            """

myCursor.execute(sqlQuery)
myDbConnection.commit()

print("Update table sucessful!")