import pyodbc

# Database connection settings
host = 'DESKTOP-0A7N73G\MSSQL'
database = 'BookingDB'

# Create a connection to the database
cnx = pyodbc.connect('DRIVER={ODBC Driver 17 for SQL Server};SERVER='+host+',1433;DATABASE='+database)

# Create a cursor object to execute queries
cursor = cnx.cursor()


import flask

app = flask.Flask(__name__)

@app.route('/submit', methods=['POST'])
def submit_form():
    # Retrieve the form data
    FirstName = flask.request.form['FirstName']
    LastName = flask.request.form['LastName']
    Email = flask.request.form['Email']
    PhoneNo = flask.request.form['PhoneNo']
    RoomType = flask.request.form['RoomType']
    NumberOfGuests = flask.request.form['NumberOfGuests']
    ArrivalDateTime = flask.request.form['ArrivalDateTime']
    DepartureDateTime = flask.request.form['DepartureDateTime']
    IsAndraMahasabhaMember = flask.request.form['IsAndraMahasabhaMember']
    AndraMahasabhaID = flask.request.form['AndraMahasabhaID']
    AndraMahasabhaPhoneNo = flask.request.form['AndraMahasabhaPhoneNo']
    SpecialRequest = flask.request.form['SpecialRequest']
    # ... retrieve all the form fields ...

    # Insert the data into the database
    query = "INSERT INTO Booking (FirstName, LastName, Email, PhoneNo, RoomType,NumberOfGuests,ArrivalDateTime,DepartureDateTime,IsAndraMahasabhaMember,AndraMahasabhaID,AndraMahasabhaPhoneNo,SpecialRequest,RoomType,...) VALUES (%s, %s, %s, %s, %s,%s,%s,%s,%s,%s,%s,%s)"
    cursor.execute(query, (FirstName, LastName, Email, PhoneNo, RoomType,NumberOfGuests,ArrivalDateTime,DepartureDateTime,IsAndraMahasabhaMember,AndraMahasabhaID,AndraMahasabhaPhoneNo,SpecialRequest))
    cnx.commit()

    return 'Form submitted successfully!'



print("H")




