////QUESTION # 04 _ Write a C++ program to read data from a text file and display it on the
//// output file along with its square, cube, and factorial. Explain why is it necessary to open
//// the file before reading from it?
//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//    ifstream in;
//    ofstream out;
//    string file_name1 = "sq, cube and fact data.txt";
//    string file_name2 = "output sq, cube and fact data.txt";
//    in.open(file_name1);
//    out.open(file_name2);
//    //out << "Number" << '\t' << "Square" << '\t' << "Cube" << '\t' << "Factorial" << endl;
//    while (!in.eof())
//    {
//
//        int num = 1, fact = 1;
//        in >> num;
//        int n = num;
//        while (n >= 1)
//        {
//            fact *= n;
//            n--;
//        }
//        
//        out << num << '\t' << '\t' << pow(num, 2) << '\t' << '\t' << pow(num, 3) << '\t' << '\t' << fact << endl;
//    }
//    in.close();
//    out.close();
//     system("pause");
//    return 0;
//}
//Explain why is it necessary to open the file before reading from it?
//Answer: It is necessary to open the file before reading from it because opening the file establishes a connection between the program and the file, allowing the program to read data from the file. Without opening the file, the program would not be able to access the data stored in the file. Opening the file also allows the program to perform operations such as reading, writing, and closing the file, ensuring that the file is properly handled by the program.
//