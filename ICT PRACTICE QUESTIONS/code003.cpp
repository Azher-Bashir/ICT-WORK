////3. Read Two Numbers and Print Their Sum
////Problem Statement : Read two numbers from a file and print their sum.
////Input File(numbers.txt) :
////	Sample Data : 10 10
////	Sample Output : Some of the two numbers is : 20
////And show there sum in the same file as complete statement showing the numbers that have been added.
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    // Read the two numbers from the file
//    ifstream in("number.txt");
//    int a, b;
//    in >> a >> b;
//    in.close();
//
//    // Reopen the file to read the existing content
//    in.open("number.txt");
//    ofstream tempFile("temp1.txt");
//    int num;
//    while (in >> num) {
//        tempFile << num << " ";
//    }
//    in.close();
//    tempFile.close();
//
//    // Write the old content and the new sum back to the file
//    ifstream tempFileRead("temp1.txt");
//    ofstream out("number.txt");
//    while (tempFileRead >> num) {
//        out << num << " ";
//    }
//    tempFileRead.close();
//
//    // Write the sum of the two numbers to the file
//    out << endl << "Some of the two numbers is : " << a + b << endl;
//    out.close();
//
//    return 0;
//}
