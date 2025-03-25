//#include <iostream>
//
//using namespace std;
//
//class Book {
//private:
//    char* title;
//    int bookID;
//    int* borrowers;
//
//public:
//    Book() : title(new char[1]), bookID(0), borrowers(new int[3] {0, 0, 0}) {
//        title[0] = '\0';
//    }
//
//    Book(const char* title, int bookID, const int* borrowers)
//        : title(new char[length(title) + 1]), bookID(bookID), borrowers(new int[3]) {
//        copyString(this->title, title);
//        for (int i = 0; i < 3; ++i) {
//            this->borrowers[i] = borrowers[i];
//        }
//    }
//
//    Book(const Book& other)
//        : title(new char[length(other.title) + 1]), bookID(other.bookID), borrowers(new int[3]) {
//        copyString(this->title, other.title);
//        for (int i = 0; i < 3; ++i) {
//            this->borrowers[i] = other.borrowers[i];
//        }
//    }
//
//    Book(Book&& other) noexcept
//        : title(other.title), bookID(other.bookID), borrowers(other.borrowers) {
//        other.title = nullptr;
//        other.borrowers = nullptr;
//    }
//
//    ~Book() {
//        delete[] title;
//        delete[] borrowers;
//    }
//
//    Book& operator=(const Book& other) {
//        if (this == &other) {
//            return *this;
//        }
//
//        delete[] title;
//        delete[] borrowers;
//
//        title = new char[length(other.title) + 1];
//        copyString(title, other.title);
//        bookID = other.bookID;
//        borrowers = new int[3];
//        for (int i = 0; i < 3; ++i) {
//            borrowers[i] = other.borrowers[i];
//        }
//
//        return *this;
//    }
//
//    Book& operator=(Book&& other) noexcept {
//        if (this == &other) {
//            return *this;
//        }
//
//        delete[] title;
//        delete[] borrowers;
//
//        title = other.title;
//        bookID = other.bookID;
//        borrowers = other.borrowers;
//
//        other.title = nullptr;
//        other.borrowers = nullptr;
//
//        return *this;
//    }
//
//    void displayBookInfo() const {
//        cout << "Book ID: " << bookID << endl;
//        cout << "Title: " << title << endl;
//        cout << "Borrower IDs: ";
//        for (int i = 0; i < 3; ++i) {
//            cout << borrowers[i] << " ";
//        }
//        cout << endl;
//    }
//
//    const char* getTitle() const { return title; }
//    void setTitle(const char* title) {
//        delete[] this->title;
//        this->title = new char[length(title) + 1];
//        copyString(this->title, title);
//    }
//
//    int getBookID() const { return bookID; }
//    void setBookID(int bookID) { this->bookID = bookID; }
//
//    const int* getBorrowers() const { return borrowers; }
//    void setBorrowers(const int* borrowers) {
//        for (int i = 0; i < 3; ++i) {
//            this->borrowers[i] = borrowers[i];
//        }
//    }
//
//    int length(const char* str) const {
//        int len = 0;
//        while (str[len] != '\0') {
//            ++len;
//        }
//        return len;
//    }
//
//    void copyString(char* dest, const char* src) const {
//        int i = 0;
//        while (src[i] != '\0') {
//            dest[i] = src[i];
//            ++i;
//        }
//        dest[i] = '\0';
//    }
//};
//
//void searchBooksByBorrower(Book* books, int numBooks, int borrowerID) {
//    for (int i = 0; i < numBooks; ++i) {
//        const int* borrowers = books[i].getBorrowers();
//        for (int j = 0; j < 3; ++j) {
//            if (borrowers[j] == borrowerID) {
//                books[i].displayBookInfo();
//                break;
//            }
//        }
//    }
//}
//
//int main() {
//    const int numBooks = 4;
//    Book books[numBooks];
//
//    int borrowers1[] = { 101, 102, 103 };
//    int borrowers2[] = { 104, 105, 106 };
//    int borrowers3[] = { 107, 108, 109 };
//    int borrowers4[] = { 110, 111, 112 };
//
//    books[0] = Book("Data Structures", 1, borrowers1);
//    books[1] = Book("Algorithms", 2, borrowers2);
//    books[2] = Book("Operating Systems", 3, borrowers3);
//    books[3] = Book("Computer Networks", 4, borrowers4);
//
//    for (int i = 0; i < numBooks; ++i) {
//        books[i].displayBookInfo();
//    }
//
//    int borrowerID;
//    cout << "Enter borrower ID to search for: ";
//    cin >> borrowerID;
//    searchBooksByBorrower(books, numBooks, borrowerID);
//
//    return 0;
//}
