//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//template<class DT>
//class MinHeap
//{
//public:
//	//part1: constructor initializes array of size maxsize 
//	MinHeap(int maxsize)
//	{
//		size = maxsize;
//		arr = new DT[maxsize + 1];
//		last = -1;
//	}
//
//	//part2: Inserts data into its appropriate position
//	//within the Heap
//
//	bool insert(const DT data)
//	{
//		if (last == size - 1)
//			return false;
//
//		last++;
//		arr[last] = data;
//
//		int child = last;
//		int parentIndex = (child - 1) / 2;
//		while (child > 0)
//		{
//			parentIndex = (child - 1) / 2;
//			if (arr[parentIndex] > arr[child])
//			{
//				swap(arr[parentIndex], arr[child]);
//				child = parentIndex;
//			}
//			else
//			{
//				break;
//			}
//		}
//		return true;
//	}
//
//	//part3: removes the element present in the the root
//	//of the Heap and readjusts it to form MaxHeap again 
//	DT Delete()
//	{
//		if (last < 0)
//		{
//			throw "Heap is empty";
//		}
//
//		DT output = arr[0];
//		arr[0] = arr[last];
//		last--;
//
//		int parentIndex = 0;
//		while (true)
//		{
//			int leftChildIndex = 2 * parentIndex + 1;
//			int rightChildIndex = 2 * parentIndex + 2;
//			int smallestIndex = parentIndex;
//
//			if (leftChildIndex <= last && arr[leftChildIndex] < arr[smallestIndex])
//			{
//				smallestIndex = leftChildIndex;
//			}
//			if (rightChildIndex <= last && arr[rightChildIndex] < arr[smallestIndex])
//			{
//				smallestIndex = rightChildIndex;
//			}
//			if (smallestIndex != parentIndex)
//			{
//				swap(arr[parentIndex], arr[smallestIndex]);
//				parentIndex = smallestIndex;
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		return output;
//	}
//
//	//part4: prints all the data present in the Heap
//	//use the appropriate traversal 
//	void printContents()
//	{
//		if (last < 0)
//		{
//			return;
//		}
//		for (int i = 0; i <= last; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//
//	//part5: destructor, deletes the MaxHeap
//	~MinHeap()
//	{
//		delete[] arr;
//	}
//
//
//private:
//	DT* arr;
//	int size;
//	int last;
//
//};
//
////Following is a sample client
//int main()
//{
//	cout << "Welcome to Lahore airport civil aviation landing system\n\n";
//
//	int size = 100;
//	MinHeap<int>* mnHeap = new MinHeap<int>(size);
//
//	string response;
//	while (true)
//	{
//		cout << "Is there an aircraft in airspace requesting to land? (Yes/No): ";
//		cin >> response;
//
//		if (response == "No" || response == "no")
//			break;
//
//		if (response == "Yes" || response == "yes")
//		{
//			int fuel;
//			cout << "Please enter the amount of fuel present in the aircraft: ";
//			cin >> fuel;
//			mnHeap->insert(fuel);
//		}
//		else
//		{
//			cout << "Invalid input. Please type Yes or No.\n";
//		}
//	}
//
//	cout << "\nGrant access of runway to the aircrafts in the following order:\n";
//
//	while (true)
//	{
//		try
//		{
//			int next = mnHeap->Delete();
//			cout << "Aircraft with " << next << " units of fuel\n";
//		}
//		catch (...)
//		{
//			break;
//		}
//	}
//
//	delete mnHeap;
//	return 0;
//}
