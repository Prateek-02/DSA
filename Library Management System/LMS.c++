#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool isIssued;

    Book(int id, string title, string author) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->isIssued = false;
    }

    void display() const {
        cout << "ID: " << id << ", Title: " << title << ", Author: " << author << ", Status: " << (isIssued ? "Issued" : "Available") << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(Book book) {
        books.push_back(book);
        cout << "Book added successfully!" << endl;
    }

    void searchBookByTitle(const string &title) const {
        for (const auto &book : books) {
            if (book.title == title) {
                book.display();
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    void searchBookById(int id) const {
        for (const auto &book : books) {
            if (book.id == id) {
                book.display();
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    void issueBook(int id, const string &studentName) {
        for (auto &book : books) {
            if (book.id == id) {
                if (!book.isIssued) {
                    book.isIssued = true;
                    cout << "Book issued to " << studentName << " successfully!" << endl;
                } else {
                    cout << "Book is already issued." << endl;
                }
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    void returnBook(int id) {
        for (auto &book : books) {
            if (book.id == id) {
                if (book.isIssued) {
                    book.isIssued = false;
                    cout << "Book returned successfully!" << endl;
                } else {
                    cout << "Book was not issued." << endl;
                }
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    void listAllBooks() const {
        vector<Book> sortedBooks = books;
        sort(sortedBooks.begin(), sortedBooks.end(), [](const Book &a, const Book &b) {
            return a.id < b.id;
        });
        for (const auto &book : sortedBooks) {
            book.display();
        }
    }

    void deleteBook(int id) {
        auto it = remove_if(books.begin(), books.end(), [id](const Book &book) {
            return book.id == id;
        });
        if (it != books.end()) {
            books.erase(it, books.end());
            cout << "Book deleted successfully!" << endl;
        } else {
            cout << "Book not found." << endl;
        }
    }
};

int main() {
    Library library;
    int choice, id;
    string title, author, studentName;

    while (true) {
        cout << "\nLibrary Management System\n";
        cout << "1. Add New Book\n";
        cout << "2. Search Book by Title\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. List All Books\n";
        cout << "7. Delete Book\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter book title: ";
            getline(cin, title);
            cout << "Enter book author: ";
            getline(cin, author);
            library.addBook(Book(id, title, author));
            break;
        case 2:
            cin.ignore();
            cout << "Enter book title: ";
            getline(cin, title);
            library.searchBookByTitle(title);
            break;
        case 3:
            cout << "Enter book ID: ";
            cin >> id;
            library.searchBookById(id);
            break;
        case 4:
            cout << "Enter book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter student name: ";
            getline(cin, studentName);
            library.issueBook(id, studentName);
            break;
        case 5:
            cout << "Enter book ID: ";
            cin >> id;
            library.returnBook(id);
            break;
        case 6:
            library.listAllBooks();
            break;
        case 7:
            cout << "Enter book ID: ";
            cin >> id;
            library.deleteBook(id);
            break;
        case 8:
            exit(0);
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
