//#include <iostream>
//using namespace std;
//
//class PublishingHouse {
//private:
//    string publisherName;
//    int foundationYear;
//public:
//    PublishingHouse(string name = "Unknown", int year = 2000) : publisherName(name), foundationYear(year) {}
//    int calculateYears(int currentYear) const {
//        return currentYear - foundationYear;
//    }
//    string getPublisherName() const {
//        return publisherName;
//    }
//    int getFoundationYear() const {
//        return foundationYear;
//    }
//};
//
//class Writer {
//private:
//    string writerName;
//    string nationality;
//    int totalBooks;
//public:
//    Writer(string name = "Unknown", string country = "Unknown", int books = 0) : writerName(name), nationality(country), totalBooks(books) {}
//    string getNationality() const {
//        return nationality;
//    }
//    string getWriterName() const {
//        return writerName;
//    }
//    int getTotalBooks() const {
//        return totalBooks;
//    }
//    void updateTotalBooks(int books) {
//        totalBooks = books;
//    }
//};
//
//class Novel {
//private:
//    string novelTitle;
//    double novelPrice;
//    PublishingHouse publisher;
//    Writer author;
//public:
//    Novel(string title = "Unknown", double price = 0.0, PublishingHouse pub = PublishingHouse(), Writer auth = Writer())
//        : novelTitle(title), novelPrice(price), publisher(pub), author(auth) {
//    }
//
//    bool isEligibleForPublication(int currentYear) const {
//        if (author.getTotalBooks() < 3) {
//            cout << "Novel can't be published: Author has published less than 3 books." << endl;
//            return false;
//        }
//        if (publisher.calculateYears(currentYear) <= 10) {
//            cout << "Novel can't be published: Publisher was established less than 10 years ago." << endl;
//            return false;
//        }
//        return true;
//    }
//
//    void showDetails() const {
//        cout << "Novel Title: " << novelTitle << endl;
//        cout << "Novel Price: " << novelPrice << endl;
//        cout << "Publisher: " << publisher.getPublisherName() << endl;
//        cout << "Year of Establishment: " << publisher.getFoundationYear() << endl;
//        cout << "Author: " << author.getWriterName() << endl;
//        cout << "Nationality: " << author.getNationality() << endl;
//        cout << "Total Books Published: " << author.getTotalBooks() << '\n' << endl;
//    }
//
//    void updatePrice(double price) {
//        novelPrice = price;
//    }
//};
//
//int main() {
//    int currentYear = 2025;
//    PublishingHouse pub("ABC Publishing", 2005);
//    Writer auth("John Doe", "USA", 7);
//    Novel novel("C++ Programming", 500, pub, auth);
//
//    novel.showDetails();
//    if (novel.isEligibleForPublication(currentYear)) {
//        cout << "The novel can be published." << endl;
//    }
//    else {
//        cout << "The novel can't be published." << endl;
//    }
//
//    novel.updatePrice(44.99);
//    auth.updateTotalBooks(2);
//    novel.showDetails();
//
//    if (novel.isEligibleForPublication(currentYear)) {
//        cout << "The novel is ready for publication." << endl;
//    }
//    else {
//        cout << "The novel cannot be published." << endl;
//    }
//
//    return 0;
//}
//
//
//
