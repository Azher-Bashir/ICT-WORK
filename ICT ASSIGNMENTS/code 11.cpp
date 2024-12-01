////Write a recursive function to solve the Tower of Hanoi problem for n disks, displaying the steps to move all
//
//#include <iostream>
//using namespace std;
//	
//static void towerOfHanoi(int n, char source, char destination, char auxiliary)
//{
//	if (n == 1)
//	{
//		cout << "Move disk 1 from rod " << source << " to rod " << destination << endl;
//		return;
//	}
//	towerOfHanoi(n - 1, source, auxiliary, destination);
//	cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;
//	towerOfHanoi(n - 1, auxiliary, destination, source);
//}
//
//int main()
//{
//	int n;
//	cout << "Enter the number of disks: ";
//	cin >> n;
//	towerOfHanoi(n, 'A', 'C', 'B');
//	return 0;
//}