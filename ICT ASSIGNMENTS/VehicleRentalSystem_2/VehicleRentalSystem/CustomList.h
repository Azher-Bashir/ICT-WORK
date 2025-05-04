/*#pragma once
#include <iostream>

template <typename DataType>
class CustomList {
private:
    DataType* dataArray;
    int maxCapacity;
    int currentSize;

public:
    CustomList();
    void addItem(DataType item);
    DataType getData(int positi*/on);
    int getSize();
    ~CustomList();
};

#include "CustomList.cpp"
