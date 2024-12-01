////Jason opened a coffee shop at the beach and sells coffee in three sizes : small(9 oz), medium(12 oz), and
////large(15 oz).The cost of one small cup is $1.75, one medium cup is $1.90, and one large cup is $2.00.
////Construct a menu - driven C++ program that will make the coffee shop operational.
////Your program should allow the user to do the following :
////a.Buy coffee in any size and in any number of cups.
////b.At any time show the total number of cups of each size sold.
////c.At any time show the total amount of coffee sold.
////d.At any time show the total money made.
////Your program should consist of at least the following functions : a function to show the user how to use the
////program, a function to sell coffee, a function to show the number of cups of each size sold, a function to
////show the total amount of coffee sold, and a function to show the total money made.Your program should not
////use any global variables and special values such as coffee cup sizes and cost of a coffee cup must be declared
////as named constants.
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//// Constants for coffee sizes and prices
//const double small_cup_price = 1.75; // small_cup_price
//const double medium_cup_price = 1.90; // medium_cup_price
//const double large_cup_price = 2.00; // large_cup_price
//const int small_cup_size = 9; // small_cup_size
//const int medium_cup_size = 12; // medium_cup_size
//const int large_cup_size = 15; // large_cup_size
//
//// Function prototypes
//void showMenu();
//void sellCoffee(int& smallCups, int& mediumCups, int& largeCups, double& totalMoney);
//void showTotalCupsSold(int smallCups, int mediumCups, int largeCups);
//void showTotalCoffeeSold(int smallCups, int mediumCups, int largeCups);
//void showTotalMoneyMade(double totalMoney);
//
//int main() {
//    int smallCups = 0, mediumCups = 0, largeCups = 0;
//    double totalMoney = 0.0;
//    int choice;
//
//    do {
//        showMenu();
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            sellCoffee(smallCups, mediumCups, largeCups, totalMoney);
//            break;
//        case 2:
//            showTotalCupsSold(smallCups, mediumCups, largeCups);
//            break;
//        case 3:
//            showTotalCoffeeSold(smallCups, mediumCups, largeCups);
//            break;
//        case 4:
//            showTotalMoneyMade(totalMoney);
//            break;
//        case 5:
//            cout << "Exiting the program. Thank you!" << endl;
//            break;
//        default:
//            cout << "Invalid choice. Please try again." << endl;
//        }
//    } while (choice != 5);
//
//    return 0;
//}
//
//void showMenu() {
//    cout << "\n********** Coffee Shop Menu **********" << endl;
//    cout << "1. Buy coffee" << endl;
//    cout << "2. Show total number of cups sold" << endl;
//    cout << "3. Show total amount of coffee sold" << endl;
//    cout << "4. Show total money made" << endl;
//    cout << "5. Exit" << endl;
//    cout << "Enter your choice: ";
//}
//
//void sellCoffee(int& smallCups, int& mediumCups, int& largeCups, double& totalMoney) {
//    int size, quantity;
//    cout << "\nSelect coffee size:" << endl;
//    cout << "1. Small (9 oz) - $" << small_cup_price << endl;
//    cout << "2. Medium (12 oz) - $" << medium_cup_price << endl;
//    cout << "3. Large (15 oz) - $" << large_cup_price << endl;
//    cout << "Enter your choice: ";
//    cin >> size;
//
//    if (size < 1 || size > 3) {
//        cout << "Invalid size choice. Returning to main menu." << endl;
//        return;
//    }
//
//    cout << "Enter the number of cups: ";
//    cin >> quantity;
//
//    if (quantity <= 0) {
//        cout << "Invalid quantity. Returning to main menu." << endl;
//        return;
//    }
//
//    switch (size) {
//    case 1:
//        smallCups += quantity;
//        totalMoney += quantity * small_cup_price;
//        break;
//    case 2:
//        mediumCups += quantity;
//        totalMoney += quantity * medium_cup_price;
//        break;
//    case 3:
//        largeCups += quantity;
//        totalMoney += quantity * large_cup_price;
//        break;
//    }
//
//    cout << "Thank you for your purchase!" << endl;
//}
//
//void showTotalCupsSold(int smallCups, int mediumCups, int largeCups) {
//    cout << "\nTotal cups sold:" << endl;
//    cout << "Small cups: " << smallCups << endl;
//    cout << "Medium cups: " << mediumCups << endl;
//    cout << "Large cups: " << largeCups << endl;
//}
//
//void showTotalCoffeeSold(int smallCups, int mediumCups, int largeCups) {
//    int totalCoffee = (smallCups * small_cup_size) + (mediumCups * medium_cup_size) + (largeCups * large_cup_size);
//    cout << "\nTotal amount of coffee sold: " << totalCoffee << " oz" << endl;
//}
//
//void showTotalMoneyMade(double totalMoney) {
//    cout << fixed << setprecision(2);
//    cout << "\nTotal money made: $" << totalMoney << endl;
//}
