//#include <iostream>
//#include <string>
//
//using namespace std;
//struct camera {
//	double front, back;
//};
//
//struct laptop
//{
//	string color;
//	int ram, rom;
//	camera camera;
//};
//
//int main()
//{
//	int size = 5;
//	cout << "Enter the size of the array: ";
//	cin >> size;
//	laptop* array = new laptop[size];
//	camera;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter the ram of the laptop: ";
//		cin >> array[i].ram;
//		cout << "Enter the rom of the laptop: ";
//		cin >> array[i].rom;
//		cout << "Enter the color of the laptop: ";
//		cin >> array[i].color;
//		cout << "Enter the front camera quality of the laptop: ";
//		cin >> array[i].camera.front;
//		cout << "Enter the back camera quality of the laptop: ";
//		cin >> array[i].camera.back;
//	}//-><-
//	for (int i = 0; i < size; i++)
//	{
//		laptop* ptr = &array[i];
//		cout << "Enter the ram of the laptop: ";
//		cin >> ptr->ram;
//		cout << "Enter the rom of the laptop: ";
//		cin >> ptr->rom;
//		cout << "Enter the color of the laptop: ";
//		cin >> ptr->color;
//		cout << "Enter the front camera quality of the laptop: ";
//		cin >> ptr -> camera -> front; //CAN NOT USE THIS BECAUSE HAVE TO INITIALIZE A SEPERATE POINTER FOR THAT AGAIN 
//		cin >> ptr->camera.front;
//		cout << "Enter the back camera quality of the laptop: ";
//		cin >> ptr->camera.back;
//	}//-><-
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "The ram of the laptop is: ";
//		cin >> array[i].ram;
//		cout << "The rom of the laptop is: ";
//		cin >> array[i].rom;
//		cout << "The color of the laptop is: ";
//		cin >> array[i].color;
//		cout << "The front camera quality of the laptop is: ";
//		cin >> array[i].camera.front;
//		cout << "The back camera quality of the laptop is: ";
//		cin >> array[i].camera.back;
//	}
//}
//
//Struct in struct
//arrays in struct
//pointer to struct
//
//
//
//int* ptr = new int;
//int* list = new int[10];
//int* list[5];
//for (int i = 0; i < 10; i++)
//{
//
//}
//cout<<list[i]