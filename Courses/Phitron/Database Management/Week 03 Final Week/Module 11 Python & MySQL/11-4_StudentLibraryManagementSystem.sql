CREATE DATABASE StudentLibManagement;
USE StudentLibManagement;

CREATE TABLE STUDENT (
	Roll VARCHAR(4) PRIMARY KEY,
    NAME VARCHAR(50)
);

CREATE TABLE LIBRARIAN (
	LIB_ID  VARCHAR(4) PRIMARY KEY,
    LIB_NAME VARCHAR(50)
);

CREATE TABLE BOOK (
	BOOK_ID  VARCHAR(4) PRIMARY KEY,
    BOOK_NAME VARCHAR(50),
    BOOK_GENRE VARCHAR(50)
);

CREATE TABLE BORROW (
	WHO_BORROWED_ROLL VARCHAR(4),
    WHICH_BOOK_ID VARCHAR(4),
    BORROW_DATE DATE,
    RETURN_DATE DATE,
    
    FOREIGN KEY (WHO_BORROWED_ROLL) REFERENCES STUDENT(ROLL),
    FOREIGN KEY (WHICH_BOOK_ID) REFERENCES BOOK(BOOK_ID),
    PRIMARY KEY (WHO_BORROWED_ROLL, WHICH_BOOK_ID)
)

CREATE TABLE PERMISSION (
    WHICH_BOOK_ID VARCHAR(4),
    WHO_PERMITTED_LIB_ID VARCHAR(4),
    
    FOREIGN KEY (WHICH_BOOK_ID) REFERENCES BOOK(BOOK_ID),
    FOREIGN KEY (WHO_PERMITTED_LIB_ID) REFERENCES LIBRARIAN(LIB_ID),
    PRIMARY KEY (WHICH_BOOK_ID, WHO_PERMITTED_LIB_ID)
)