//#include <iostream>
//using namespace std;
//
//void Getdata(int* list1, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cin >> list1[i];
//    }
//}
//bool compare(int* list1, int* list2, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (list1[i] != list2[i])
//        {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//int main()
//{
//    int size;
//    cout << "Enter the size of Arrays: " << endl;
//    cin >> size;
//
//    int* list1 = new int[size];
//    cout << "Enter the Data in Array 1:" << endl;
//    Getdata(list1, size);
//
//    int* list2 = new int[size];
//    cout << "Enter the Data in Array 1:" << endl;
//    Getdata(list2, size);
//
//    cout << "Compare both Arrays: " << endl;
//    if (compare(list1, list2, size))
//    {
//        cout << "Both Arrays are indentical: " << endl;
//    }
//    else
//    {
//        cout << "Both Arrays are not indentical: " << endl;
//    }
//
//    delete[] list1;
//    delete[] list2;
//
//    return 0;
//}