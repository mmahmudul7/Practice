class Library:
    book_list = []

    @classmethod
    def entry_book(entry, book):
        entry.book_list.append(book)

    @classmethod
    def view_all_books(entry):
        if not entry.book_list:
            print("No books in the library.")
        else:
            print("All books in the library:")
            for book in entry.book_list:
                book.view_book_info()


class Book:
    def __init__(self, book_id, title, author, availability=True):
        self.__book_id = book_id
        self.__title = title
        self.__author = author
        self.__availability = availability
        Library.entry_book(self)

    def get_book_id(self):
        return self.__book_id

    def is_available(self):
        return self.__availability

    def borrow_book(self):
        if self.__availability:
            self.__availability = False
            print(f"Book '{self.__title}' has been borrowed.")
        else:
            print(f"Error: Book '{self.__title}' is already borrowed.")

    def return_book(self):
        if not self.__availability:
            self.__availability = True
            print(f"Book '{self.__title}' has been returned and is now available.")
        else:
            print(f"Error: Book '{self.__title}' was not borrowed.")

    def view_book_info(self):
        if self.__availability:
            status = 'Available'
        else:
            status = 'Not Available'

        print(f"Book ID: {self.__book_id}")
        print(f"Title: {self.__title}")
        print(f"Author: {self.__author}")
        print(f"Status: {status}")
        print()


def menu():
    while True:
        print()
        print("Library Menu:")
        print("1. View All Books")
        print("2. Borrow Book")
        print("3. Return Book")
        print("4. Exit")

        choice = input("Enter your choice: ")

        if choice == '1':
            Library.view_all_books()

        elif choice == '2':
            try:
                book_id = int(input("Enter the Book ID to borrow: "))
                book = None
                for b in Library.book_list:
                    if b.get_book_id() == book_id:
                        book = b
                        break

                if not book:
                    print("Error: Invalid Book ID.")
                else:
                    book.borrow_book()
            except ValueError:
                print("Error: Please enter a valid numeric Book ID.")

        elif choice == '3':
            try:
                book_id = int(input("Enter the Book ID to return: "))
                book = None
                for b in Library.book_list:
                    if b.get_book_id() == book_id:
                        book = b
                        break

                if not book:
                    print("Error: Invalid Book ID.")
                else:
                    book.return_book()
            except ValueError:
                print("Error: Please enter a valid numeric Book ID.")

        elif choice == '4':
            print("Exiting the system. Goodbye!")
            break

        else:
            print("Invalid choice. Please try again.")


# Adding books manually
Book(101, "Python Programming", "Mahmudul Hasan")
Book(102, "Data Structures", "Hasan Shamim")
Book(103, "Algorithms Made Easy", "Kader Khan")
Book(104, "MySQL", "Hasib Naseer")

menu()