//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//	ifstream file_read;
//	ofstream file_write;
//	string read = "unreversed_number.txt";
//	string write = "reversed_number.txt";
//	file_read.open(read);
//	file_write.open(write);
//	int  num, org, i;
//	//cout << "Enter the number you want to reverse: ";
//	file_read >> num;
//	org = num;
//	//while (org != 0)
//	//{
//	//	org % 10;
//	//	i++;
//	//}
//	org = num;
//	cout << "The reversed number is: ";
//	while (org != 0)
//	{
//		cout << org % 10;
//		file_write << org % 10;
//		org /= 10;
//	}
//	return 0;
//
//
//}