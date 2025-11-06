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
//	int size = 40;
//	MinHeap<int>* mnHeap = new MinHeap<int>(40); //creating an object of minheap
//	//mxHeap = new MaxHeap<int>(40);
//	//insert following data in the MinHeap
//	mnHeap->insert(12);
//	mnHeap->insert(43);
//	mnHeap->insert(9);
//	mnHeap->insert(2);
//	mnHeap->insert(14);
//	mnHeap->insert(16);
//	mnHeap->insert(13);
//	mnHeap->insert(12);
//	mnHeap->printContents();
//	//Carry out 2 deletions from the MinHeap
//	int output;
//	output = mnHeap->Delete();
//
//	cout << " output of first deletion is " << output << endl;
//	//of first deletion is
//	mnHeap->printContents();
//	cout << " output of second deletion is " << mnHeap->Delete() << endl;
//	mnHeap->printContents();
//
//	return 0;
//}
