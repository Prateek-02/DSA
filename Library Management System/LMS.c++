#include <iostream>
#include <vector>
#include <string>
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
        cout << "ID: " << id << ", Title: " << title << ", Author: " << author << ", " 
             << (isIssued ? "Issued" : "Available") << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book &book) {
        books.push_back(book);
        cout << "Book added!" << endl;
    }

    void searchBookByTitle(const string &title) const {
        for (const auto &book : books) {
            if (book.title == title) {
                book.display();
                return;
            }
        }
        cout << "Book not found!" << endl;
    }

    void searchBookById(int id) const {
        for (const auto &book : books) {
            if (book.id == id) {
                book.display();
                return;
            }
        }
        cout << "Book not found!" << endl;
    }

    void issueBook(int id) {
        for (auto &book : books) {
            if (book.id == id && !book.isIssued) {
                book.isIssued = true;
                cout << "Book issued!" << endl;
                return;
            }
        }
        cout << "Book unavailable!" << endl;
    }

    void returnBook(int id) {
        for (auto &book : books) {
            if (book.id == id && book.isIssued) {
                book.isIssued = false;
                cout << "Book returned!" << endl;
                return;
            }
        }
        cout << "Book not found!" << endl;
    }

    void listAllBooks() const {
        for (const auto &book : books) {
            book.display();
        }
    }

    void deleteBook(int id) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->id == id) {
                books.erase(it);
                cout << "Book deleted!" << endl;
                return;
            }
        }
        cout << "Book not found!" << endl;
    }
};

int main() {
    Library library;
    int choice, id;
    string title, author;

    while (true) {
        cout << "\n1. Add Book\n2. Search by Title\n3. Search by ID\n4. Issue Book\n5. Return Book\n6. List Books\n7. Delete Book\n8. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "ID: "; cin >> id;
            cout << "Title: "; cin >> title;
            cout << "Author: "; cin >> author;
            library.addBook(Book(id, title, author));
            break;
        case 2:
            cout << "Title: "; cin >> title;
            library.searchBookByTitle(title);
            break;
        case 3:
            cout << "ID: "; cin >> id;
            library.searchBookById(id);
            break;
        case 4:
            cout << "ID: "; cin >> id;
            library.issueBook(id);
            break;
        case 5:
            cout << "ID: "; cin >> id;
            library.returnBook(id);
            break;
        case 6:
            library.listAllBooks();
            break;
        case 7:
            cout << "ID: "; cin >> id;
            library.deleteBook(id);
            break;
        case 8:
            return 0;
        default:
            cout << "Invalid option!" << endl;
        }
    }
}
