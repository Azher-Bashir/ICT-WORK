#pragma once
#ifndef SHIPMENT_H
#define SHIPMENT_H
#include <iostream>
#include <string>
using namespace std;

class Shipment {
public:
	int id;
	string sender;
	string receiver;
	string FomCity;
	string ToCity;
};
class HashTable {
private:
	int SIZE;
	Shipment* table;
	bool occupied = new bool [SIZE];
public:
	HashTable(int hashsize)
	{
		SIZE = hashsize;
		table = new Shipment[SIZE];
		occupied = NULL;
	}
	int hashFunction(int key)
	{
		return key % SIZE;
	}
	void insertShipment(int id, string s, string r, string fromcity, string tocity)
	{
		int index = hashFunction(id);
		int start = index;
		if (table[index] == id) {

		}
	}
	Shipment* searchShipment(int id);
	void removeShipment(int id);
};

#endif
