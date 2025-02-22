#include <iostream>
using namespace std;

class Book {
private:
    char title[100];
    char author[100];
    long long ISBN;

public:
    // Default Constructor
    Book() {
        title[0] = '\0';
        author[0] = '\0';
        ISBN = 0;
    }

    // Parameterized Constructor
    Book(const char t[], const char a[], long long isbn) {
        strcpy(title, t);
        strcpy(author, a);
        ISBN = isbn;
    }

    void setDetails(const char t[], const char a[], long long isbn) {
        strcpy(title, t);
        strcpy(author, a);
        ISBN = isbn;
    }

    void displayDetails() {
        cout << "Book Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
    }
};

int main() {
    Book book1;
    char title[100], author[100];
    long long ISBN;

    cout << "Enter Book Title: ";
    cin.getline(title, 100);
    cout << "Enter Author Name: ";
    cin.getline(author, 100);
    cout << "Enter ISBN: ";
    cin >> ISBN;
    cin.ignore();

    book1.setDetails(title, author, ISBN);
    book1.displayDetails();

    return 0;
}
