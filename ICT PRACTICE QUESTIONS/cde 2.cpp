//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    // Read the full name from the file
//    ifstream file("name.txt");
//    char ch;
//    while (file.get(ch) && ch != '\n') {
//        cout << ch;
//    }
//    cout << endl;
//    file.close();
//
//    // Reopen the file to read the existing content character by character
//    file.open("name.txt");
//    ofstream tempFile("temp.txt");
//    while (file.get(ch)) {
//        tempFile.put(ch);
//    }
//    file.close();
//    tempFile.close();
//
//    // Write the old content and the new name back to the file
//    ifstream tempFileRead("temp.txt");
//    ofstream filewrite("name.txt");
//    while (tempFileRead.get(ch)) {
//        filewrite.put(ch);
//    }
//    tempFileRead.close();
//
//    // Write the name again to the file
//    file.open("name.txt");
//    while (file.get(ch) && ch != '\n') {
//        filewrite.put(ch);
//    }
//    filewrite.put('\n');
//    file.close();
//    filewrite.close();
//
//    // Append the name again to the file
//    file.open("name.txt");
//    ofstream fileappend("name.txt", ios::app);
//    while (file.get(ch) && ch != '\n') {
//        fileappend.put(ch);
//    }
//    fileappend.put('\n');
//    file.close();
//    fileappend.close();
//
//    return 0;
//}
//
