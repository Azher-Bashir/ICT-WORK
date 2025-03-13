//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    // Open the file to read the three words
//    ifstream file("sentence.txt");
//    ofstream tempFile("temp.txt");
//    char ch;
//
//    // Read and print the first word
//    while (file.get(ch) && ch != ' ') {
//        cout.put(ch);
//        tempFile.put(ch);
//    }
//    cout.put(' ');
//    tempFile.put(' ');
//
//    // Read and print the second word
//    while (file.get(ch) && ch != ' ') {
//        cout.put(ch);
//        tempFile.put(ch);
//    }
//    cout.put(' ');
//    tempFile.put(' ');
//
//    // Read and print the third word
//    while (file.get(ch) && ch != '\n' && file) {
//        cout.put(ch);
//        tempFile.put(ch);
//    }
//    cout.put('\n');
//    tempFile.put('\n');
//
//    file.close();
//    tempFile.close();
//
//    // Write the content from the temporary file back to the original file
//    ifstream tempFileRead("temp.txt");
//    ofstream outFile("sentence.txt");
//    while (tempFileRead.get(ch)) {
//        outFile.put(ch);
//    }
//    tempFileRead.close();
//    outFile.close();
//
//    return 0;
//}
//
