#include <iostream>
#include <string>
using namespace std;

class Publisher {
private:
    string name;
    int year;
public:
    Publisher(string name = "Unknown", int year = 2000) : name(name), year(year) {}

    int getAge(int currentYear) const {
        return currentYear - year;
    }
    string getName() const {
        return name;
    }
    int getYear() const {
        return year;
    }
};

class Author {
private:
    string name;
    string country;
    int books;
public:
    Author(string name = "Unknown", string country = "Unknown", int books = 0) : name(name), country(country), books(books) {}
    string getCountry() const {
        return country;
    }
    string getName() const {
        return name;
    }
    int getBooks() const {
        return books;
    }
    void setBooks(int b) {
        books = b;
    }
};

class Book {
private:
    string title;
    double price;
    Publisher publisher;
    Author author;
public:
    Book(string title = "Unknown", double price = 0.0, Publisher publisher = Publisher(), Author author = Author())
        : title(title), price(price), publisher(publisher), author(author) {
    }

    bool canBePublished(int currentYear) const {
        if (author.getBooks() < 3) {
            cout << "Books can't be published: Author has published less than 3 books." << endl;
            return false;
        }
        if (publisher.getAge(currentYear) <= 10) {
            cout << "Books can't be published: Publisher was established less than 10 years ago." << endl;
            return false;
        }
        return true;
    }

    void displayDetails() const {
        cout << "Title of the book: " << title << endl;
        cout << "Price of the book: " << price << endl;
        cout << "Publisher: " << publisher.getName() << endl;
        cout << "Year of establishment: " << publisher.getYear() << endl;
        cout << "Author: " << author.getName() << endl;
        cout << "Country: " << author.getCountry() << endl;
        cout << "Books published: " << author.getBooks() << endl << endl;
    }

    void setPrice(double p) {
        price = p;
    }
};

int main() {
    int currentYear = 2025;
    Publisher publisher("Sheikh", 2007);
    Author author("Someone2", "Lahore", 7);
    Book book("Linear Circuit Analysis", 500, publisher, author);

    book.displayDetails();
    if (book.canBePublished(currentYear)) {
        cout << "Your book can be published." << endl;
    }
    else {
        cout << "Book can't be published." << endl;
    }

    book.setPrice(30.56);
    author.setBooks(4);
    book.displayDetails();

    if (book.canBePublished(currentYear)) {
        cout << "Book is ready for publication." << endl;
    }
    else {
        cout << "Book cannot be published." << endl;
    }

    return 0;
}
