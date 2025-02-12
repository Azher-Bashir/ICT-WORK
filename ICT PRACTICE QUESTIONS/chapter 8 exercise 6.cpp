//////The history teacher at your school needs help in grading a True / False
//////test.The students’ IDs and test answers are stored in a file.The first
//////entry in the file contains answers to the test in the form :
//////TFFTFFTTTTFFTFTFTFTT
//////Every other entry in the file is the student ID, followed by a blank, followed
//////by the student’s responses.For example, the entry :
//////ABC54301 TFTFTFTT TFTFTFFTTFT
//////indicates that the student ID is ABC54301 and the answer to question
//////1 is True, the answer to question 2 is False, and so on.This student did
//////not answer question 9. The exam has 20 questions, and the class has
//////more than 150 students.Each correct answer is awarded two points,
//////each wrong answer gets one point deducted, and no answer gets
//////zero points.Write a program that processes the test data.The output
//////should be the student’s ID, followed by the answers, followed by
//////the test score, followed by the test grade.Assume the following grade
//////scale : 90 % –100%, A; 80 % –89.99 %, B; 70 % –79.99 %, C; 60 % –69.99 %,
//////D; and 0 % –59.99 %, F.
////
////#include <iostream>
////#include <fstream>
////#include <string>
////using namespace std;
////
////int main()
////{
////	ifstream fin;
////	fin.open("test.txt");
////	if (fin.fail())
////	{
////		cout << "File not found" << endl;
////		return 0;
////	}
////	string answers;
////	fin >> answers;
////	string id;
////	string response;
////	while (fin >> id >> response)
////	{
////		int score = 0;
////		for (int i = 0; i < answers.length(); i++)
////		{
////			if (answers[i] == response[i])
////			{
////				score += 2;
////			}
////			else if (response[i] != ' ')
////			{
////				score--;
////			}
////		}
////		char grade;
////		if (score >= 90)
////		{
////			grade = 'A';
////		}
////		else if (score >= 80)
////		{
////			grade = 'B';
////		}
////		else if (score >= 70)
////		{
////			grade = 'C';
////		}
////		else if (score >= 60)
////		{
////			grade = 'D';
////		}
////		else
////		{
////			grade = 'F';
////		}
////		cout << id << " " << response << " " << score << " " << grade << endl;
////	}
////	fin.close();
////	return 0;
////}
//
//
//
//
//#include<iostream>
//#include<fstream>
//#include <string>
//
//using namespace std;
//
//static int check(char *ans, int size)
//{
//	int marks = 0, total = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (*(ans + i) != 'T' && *(ans + i) != 'F')
//		{
//			ignore;
//		}
//		else if (*(ans + i) == 'T')
//		{
//			marks += 2;
//		}
//		else if (*(ans + i) == 'F')
//		{
//			marks -= 1;
//		}
//
//		return marks;
//
//	}
//}
//int main()
//{
//	char roll_number, ans, temp;
//	int size = 29, i = 0, marks = 0;
//	ifstream file_read;
//	ofstream file_write;
//	string file_name = "student_marks.txt";
//	file_read.open(file_name);
//	//while (!file_read.eof())
//	//{
//	//	file_read >> temp;
//	//	size++;
//	//}
//	cout << size << endl;
//	char* arr = new char[size + 1];
//	while (!file_read.eof())
//	{
//		file_read >> temp;
//		//size++;
//		if (temp != 'T' && temp != 'F')
//		{
//			*(arr + i) = temp;
//		}
//		else
//		{
//			*(arr + i) = temp;
//		}
//
//		marks = check(arr, size);
//		i++;
//	}
//	cout << marks;
//	cout << endl;
//	for (int i= 0; i < size; i++)
//	{
//		cout << *(arr + i);
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}