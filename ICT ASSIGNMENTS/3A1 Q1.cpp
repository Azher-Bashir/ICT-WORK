//#include <iostream>
//using namespace std;
//
//static int elementPosition(int dimensions, int* index, int* dimensionSize) {
//    int position = 0;
//    int multiplier = 1;
//    for (int i = dimensions - 1; i >= 0; i--) {
//        position += index[i] * multiplier;
//        multiplier *= dimensionSize[i];
//    }
//    return position;
//}
//
//int main() {
//    int dimensions;
//    int* dimensionSize = new int[dimensions];
//    int* index = new int[dimensions];
//    cout << "Enter number of dimensions: ";
//    cin >> dimensions;
//    cout << "Enter size of each dimension:\n";
//    for (int i = 0; i < dimensions; i++)
//    {
//        cout << "Size of dimension " << i << ": ";
//        cin >> dimensionSize[i];
//    }
//    cout << "Enter index of element in each dimension:\n";
//    for (int i = 0; i < dimensions; i++) 
//    {
//        cout << "Index in dimension " << i << ": ";
//        cin >> index[i];
//    }
//    int pos = elementPosition(dimensions, index, dimensionSize);
//    cout << "\nLinear position of the element in row-major order = " << pos << endl;
//
//    delete[] dimensionSize;
//    delete[] index;
//    return 0;
//}
