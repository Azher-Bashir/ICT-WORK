//#include "CustomList.h"
//
//template <typename DataType>
//CustomList<DataType>::CustomList() : dataArray(nullptr), maxCapacity(100), currentSize(0) {
//    dataArray = new DataType[100];
//}
//
//template <typename DataType>
//void CustomList<DataType>::addItem(DataType item) {
//    if (currentSize < maxCapacity)
//        dataArray[currentSize++] = item;
//    else
//        std::cout << "List is full.\n";
//}
//
//template <typename DataType>
//DataType CustomList<DataType>::getData(int position) {
//    if (position >= 0 && position < currentSize)
//        return dataArray[position];
//    else
//        return nullptr;
//}
//
//template <typename DataType>
//int CustomList<DataType>::getSize() {
//    return currentSize;
//}
//
//template <typename DataType>
//CustomList<DataType>::~CustomList() {
//    delete[] dataArray;
//}
