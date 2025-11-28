#pragma once
#ifndef DELIVERYAPP_H
#define DELIVERYAPP_H
#include <iostream>
#include <string>
#include "Graph.h"
#include "Shipment.h"
using namespace std;
class DeliveryApp {
private:
	Graph graph;
	HashTable shipments;
public:
	DeliveryApp(int hashSize) : shipments(hashSize) {
		// setup fixed routes
		cout << "--- Initializing DeliveryApp with fixed routes ---" << endl;
		graph.addRoute(0, 1, 380);
		graph.addRoute(0, 3, 350);
		graph.addRoute(1, 2, 1400);
		graph.addRoute(2, 3, 900);
	}
	void addRoute(int FromCity, int ToCity, int distance) {
		graph.addRoute(FromCity, ToCity, distance);
	}
	bool insertShipment(int id, string sender, string receiver, string src, string dest) {

		shipments.insertShipment(id, sender, receiver, src, dest);
		return true;
	}
	void findRouteForShipment(int shipmentID)
	{
		Shipment* shipment = shipments.searchShipment(shipmentID);

		if (shipment == nullptr) {
			cout << "Error: Shipment with ID " << shipmentID << " not found." << endl;
			return;
		}

		cout << "\n--- Finding Route for Shipment ID: " << shipmentID << " ---" << endl;
		cout << "Details: " << shipment->sender << " -> " << shipment->receiver
			<< " (" << shipment->FromCity << " to " << shipment->ToCity << ")" << endl;

		// B. Get the city indices from the shipment data
		int srcIndex = graph.getCityIndex(shipment->FromCity);
		int destIndex = graph.getCityIndex(shipment->ToCity);

		if (srcIndex == -1 || destIndex == -1) {
			cout << "Error: One or both cities in the shipment record are invalid." << endl;
			return;
		}

		// C. Use the Graph function to find the shortest route
		graph.findShortestRoute(srcIndex, destIndex);
	}
		void printMap() {
		graph.printRouteMap();
	}
};

#endif // !DELIVERYAPP_H
