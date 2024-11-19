import mysql.connector

myDbConnection = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "password"
)

db_name = "python_test_db"

myCursor = myDbConnection.cursor()

sqlQuery = "CREATE DATABASE " + db_name

myCursor.execute(sqlQuery)

print("Database Created Sucessfully!")