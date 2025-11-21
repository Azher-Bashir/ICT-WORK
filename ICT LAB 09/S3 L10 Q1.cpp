//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//template<class DT>
//class MaxHeap
//{
//public:
//	//part1: constructor initializes array of size maxsize 
//	MaxHeap(int maxsize)
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
//		if (last == - 1)  // heap full for 0-based indexing
//			return false;
//
//		last++;
//		arr[last] = data;
//
//		int child = last;
//		//int parentIndex = (child - 1) / 2;
//		while (child > 0)
//		{
//			int parentIndex = (child - 1) / 2;
//			if (arr[parentIndex] < arr[child])
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
//			int largestIndex = parentIndex;
//
//			if (leftChildIndex <= last && arr[leftChildIndex] > arr[largestIndex])
//			{
//				largestIndex = leftChildIndex;
//			}
//			if (rightChildIndex <= last && arr[rightChildIndex] > arr[largestIndex])
//			{
//				largestIndex = rightChildIndex;
//			}
//			if (largestIndex != parentIndex)
//			{
//				swap(arr[parentIndex], arr[largestIndex]);
//				parentIndex = largestIndex;
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
//	~MaxHeap()
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
//	MaxHeap<int>* mxHeap = new MaxHeap<int>(40); //creating an object of maxheap
//	//mxHeap = new MaxHeap<int>(40);
//	//insert following data in the MaxHeap
//	mxHeap->insert(12);
//	mxHeap->insert(43);
//	mxHeap->insert(9);
//	mxHeap->insert(2);
//	mxHeap->insert(14);
//	mxHeap->insert(16);
//	mxHeap->insert(13);
//	mxHeap->insert(12);
//	mxHeap->printContents();
//	//Carry out 2 deletions from the MaxHeap
//	int output;
//	output = mxHeap->Delete();
//
//	cout << " output of first deletion is " << output << endl;
//	//of first deletion is
//	mxHeap->printContents();
//	cout << " output of second deletion is " << mxHeap->Delete() << endl;
//	mxHeap->printContents();
//
//	return 0;
//}
