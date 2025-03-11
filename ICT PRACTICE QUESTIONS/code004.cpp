//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    // Read the three numbers from the file
//    ifstream in("average.txt");
//    int a, b, c;
//    in >> a >> b >> c;
//    in.close();
//
//    // Reopen the file to read the existing content
//    in.open("average.txt");
//    ofstream tempFile("temp.txt");
//    int num;
//    while (in >> num) {
//        tempFile << num << " ";
//    }
//    in.close();
//    tempFile.close();
//
//    // Write the old content and the average back to the file
//    ifstream tempFileRead("temp.txt");
//    ofstream out("average.txt");
//    while (tempFileRead >> num) {
//        out << num << " ";
//    }
//    tempFileRead.close();
//
//    // Calculate and write the average of the three numbers to the file
//    int average = (a + b + c) / 3;
//    out << endl << "Average of the three numbers is : " << average << endl;
//    out.close();
//
//    return 0;
//}
//
