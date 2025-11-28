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
	string FromCity;
	string ToCity;
	Shipment() : id(-1), sender(""), receiver(""), FromCity(""), ToCity("") {}
	Shipment(int id, string s, string r, string fc, string tc) : id(id), sender(s), receiver(r), FromCity(fc), ToCity(tc) {}
};
class HashTable {
private:
	int SIZE;
	Shipment* table;
	int* occupied;
public:
	HashTable(int hashsize)
	{
		SIZE = hashsize;
		table = new Shipment[SIZE];
		occupied = new int[SIZE];
		for (int i = 0; i < SIZE; i++)
		{
			occupied[i] = 0;
		}
	}
	int hashFunction(int key)
	{
		return key % SIZE;
	}
	void insertShipment(int id, string s, string r, string fromcity, string tocity)
	{
		Shipment newshipment(id, s, r, fromcity, tocity);
		int index = hashFunction(id);
		int start = index;
		do {
			if (occupied[index] == 0 || occupied[index] == 2) {
				//table[index].id = id;
				//table[index].sender = s;
				//table[index].receiver = r;
				//table[index].FromCity = fromcity;
				//table[index].ToCity = tocity;
				table[index] = newshipment;
				occupied[index] = 1;
				cout << "Shipment " << id << " inserted at index " << index << "." << endl;
				return;
			}
			//else if (occupied[index] == 1 && table[index].id == id) {
			if (occupied[index] == 1 && table[index].id == id)
			{
				cout << "Error: Shipment with ID " << id << " already exists." << endl;
				return;
			}
			index = hashFunction(index+1);
		} while (index != start);
		cout << "Error: Hash Table is full. Cannot insert shipment with ID " << id << "." << endl;
	}
	Shipment* searchShipment(int id)
	{
		int index = hashFunction(id);
		int start = index;
		do {
			if (occupied[index] == 0)
			{
				return nullptr;
			}
			if (table[index].id == id && occupied[index] == 1)
			{
				return &table[index];
			 }
			index = hashFunction(index + 1);
		} while (index != start);
		cout << "Not Found !!!" << endl;
	}
	void removeShipment(int id) {
		int index = hashFunction(id);
		int start = index;
		do {
			if (occupied[index] == 0)
			{
				cout << "Shipment with ID " << id << " not found for removal." << endl;
				return;
			}
			if (table[index].id == id && occupied[index] == 1)
			{
				//table[index];
				occupied[index] == 2;
				cout << "Shipment with ID " << id << " removed successfully." << endl;
				return;
			}
			index = hashFunction(index + 1);
		} while (index != start);
		cout << "Not Found !!!" << endl;
	}
};

#endif
