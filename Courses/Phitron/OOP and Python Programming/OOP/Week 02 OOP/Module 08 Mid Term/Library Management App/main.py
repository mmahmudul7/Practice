'''
1. Define a class named Library with one class attribute named book_list. Initially, it should be an empty list. Create a class method entry_book() to insert an object of the Book class into book_list.
'''

class Library:
    book_list = []

    def entry_book(self, entry, book):
        entry.book_list.append(book)

    def view_all_book(entry):
        if not entry.book_list:
            print('No books in library')
        else:
            print('All books in library:')
            for book in entry.book_list:
                book.view_book_info()

'''
2. Define a class Book with the following instance attributes:
- book_id: Unique identifier for the book.
- title: Title of the book.
- author: Author of the book.
- availability: A boolean indicating if the book is available for borrowing or not.
'''

class Book:
    def __init__(self, book_id, title, author, availability = True):
        '''
        9. Make the attributes (such as book_id, title, author, availability) as protected/private as possible using Python’s class mechanisms. This will ensure that these attributes cannot be accessed directly outside the class.
        '''
        self.__book_id = book_id
        self.__title = title
        self.__author = author
        self.__availability = availability

    '''
    3. In the constructor of the Book class, initialize the attributes. Insert the Book object into book_list using the method entry_book(). This part will be done manually, i.e., no need for a menu option.
    '''

    Library.entry_book()

    def get_book_id(self):
        return self.__book_id

    def get_title(self):
        return self.__title

    def get_author(self):
        return self.__author

    def is_available(self):
        return self.__availability

    '''
    4. Add a method borrow_book() in the Book class that checks if the book is available for borrowing (i.e., the book’s availability is True). If so, change the availability to False.
    '''

    def borrow_book(self):
        if self.__availability:
            self.__availability = False
            print(f'Book {self.__title} borrowed')
        else:
            print(f'{self.__title} is not availabile')

    '''
    5. Add a method return_book() in the Book class that changes the availability of the book back to True when a book is returned.
    '''

    def return_book(self):
        if not self.__availability:
            self.__availability = True
            print(f'{self.__title} is avaliable')
        else:
            print(f'{self.__title} is already avaliable')

    '''
    6. Add a method view_book_info() in the Book class to display the details of the book, including its book_id, title, author, and availability status.
    '''

    def view_book_info(self):
        if self.__availability:
            status = 'Available'
        else:
            status = 'Not Available'

        print(f'Book ID: {self.book_id}')
        print(f'Title: {self.title}')
        print(f'Author: {self.author}')
        print(f'Status: {status}')
        print()

'''
7. Create a menu-driven system with the following options:
    1. View All Books
    2. Borrow Book
    3. Return Book
    4. Exit.
Handle the user’s choice using input prompts.
'''

def menu():
    while True:
        print()
        print("Library Menu:")
        print("1. View All Books")
        print("2. Borrow Book")
        print("3. Return Book")
        print("4. Exit")

        choice = input("Enter your choice: ")
        '''
        8. Implement error handling for:
        - Invalid book ID when borrowing or returning a book.
        - Trying to borrow a book that is already borrowed.
        - Trying to return a book that is not borrowed.
        '''

        if choice == '1':
            Library.view_all_books()

        elif choice == '2':
            while True:
                try:
                    book_id = int(input("Enter the Book ID to borrow: "))
                    book = None

                    for b in Library.book_list:
                        if b.get_book_id() == book_id:
                            book = b
                            break

                    if not book:
                        print("Invalid Book ID.")
                    else:
                        book.borrow_book()

                    break
                except ValueError as e:
                    print(f"Error {e}")
                    continue

        elif choice == '3':
            while True:
                try:
                    book_id = int(input("Enter the Book ID to return: "))
                    book = None

                    for b in Library.book_list:
                        if b.get_book_id() == book_id:
                            book = b
                            break

                    if not book:
                        print("Invalid Book ID.")
                    else:
                        book.return_book()

                    break
                except ValueError as e:
                    print(f"Error {e}")
                    continue

        elif choice == '4':
            print("Exit!")
            break

        else:
            print("Invalid choice. Try again.")

Book('101', 'Python Programming', 'Mahmudul Hasan')
Book('102', 'Data Structures', 'Hasan Shamim')
Book('103', 'Algorithms Made Easy', 'Kader Khan')
Book('104', 'MySQL', 'Hasib Naseer')

menu()