CREATE TABLE Bookings (
  ID INT ,
  FirstName VARCHAR(50) NOT NULL,
  LastName VARCHAR(50) NOT NULL,
  Email VARCHAR(100) NOT NULL,
  PhoneNo VARCHAR(20) NOT NULL,
  RoomType VARCHAR(50) NOT NULL,
  NumberOfGuests INT NOT NULL,
  ArrivalDateTime DATETIME NOT NULL,
  DepartureDateTime DATETIME NOT NULL,
  IsAndraMahasabhaMember TINYINT NOT NULL,
  AndraMahasabhaID VARCHAR(50) NULL,
  AndraMahasabhaPhoneNo VARCHAR(20) NULL,
  SpecialRequest TEXT NULL,
  PRIMARY KEY (ID)
);
SELECT* FROM Bookings ;
