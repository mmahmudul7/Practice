import mysql.connector

myDbConnection = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "password"
)

print(myDbConnection)
print("Connected!")