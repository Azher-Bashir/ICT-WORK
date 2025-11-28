#pragma once
#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <string>
using namespace std;

class Graph {
private:
	static const int MAX = 5; // FIXED NUMBER OF CITIES
	string cities[MAX] = { "Lahore", "Islamabad", "Karachi", "Multan","Peshawar"};
	int adj[MAX][MAX];
public:
	Graph()
	{
		for (int i = 0; i < MAX; i++)
		{
			for (int i = 0; i < MAX; i++)
			{
				adj[MAX][MAX] = 0;
			}
		}
	}
	void addRoute(int u, int v, int distance) {
		if (u >= 0 && u < MAX && v < MAX)
		{
			adj[u][v] = distance;
			adj[v][u] = distance;
		}
		else cout << "!!! INVALID INPUT !!!";
	}
	void removeRoute(int u, int v)
	{
		if (u >= 0 && u < MAX && v < MAX)
		{
			adj[u][v] = 0;
			adj[v][u] = 0;
		}
		else cout << "!!! INVALID INPUT !!!";

	}




    void findShortestRoute(int src, int dest)
    {
        if (src < 0 || src >= MAX || dest < 0 || dest >= MAX) {
            cout << "Error: Invalid source or destination city index." << endl;
            return;
        }

        // 1. Initialization
        const int INF = 999999;  // Represents infinity (unreachable distance)
        int dist[MAX];
        bool sptSet[MAX];

        for (int i = 0; i < MAX; i++) {
            dist[i] = INF;  // Initialize all distances to infinity
            sptSet[i] = false;
        }
        dist[src] = 0;  // Distance to source is 0

        cout << "\n--- Finding Shortest Route using Dijkstra's Algorithm ---" << endl;
        cout << "Starting from: " << cities[src] << endl;

        // 2. Main Loop
        for (int count = 0; count < MAX; count++) {

            // A. Find the minimum distance vertex (u)
            int u = -1;
            int min_dist = INF;  // Start with infinity

            for (int v = 0; v < MAX; v++) {
                if (!sptSet[v] && dist[v] < min_dist) {
                    min_dist = dist[v];
                    u = v;
                }
            }

            if (u == -1) break;  // All remaining nodes are unreachable

            // B. Finalize the path to u
            sptSet[u] = true;
            if (u == dest) break;  // Found destination, can stop early

            // C. Update neighbor distances (Relaxation)
            for (int v = 0; v < MAX; v++) {
                // Check if there's an edge from u to v (adj[u][v] != 0)
                if (!sptSet[v] && adj[u][v] != 0 && dist[u] != INF
                    && dist[u] + adj[u][v] < dist[v]) {

                    dist[v] = dist[u] + adj[u][v];
                }
            }
        }

        // 3. Output Result
        if (dist[dest] == INF) {  // Check if destination is unreachable
            cout << "Result: No path exists from " << cities[src] << " to " << cities[dest] << "." << endl;
        }
        else {
            cout << "Result: The shortest distance from " << cities[src] << " to " << cities[dest]
                << " is: " << dist[dest] << endl;
        }
    }


	int getCityIndex(string c) {
		for (int i = 0; i < MAX; i++)
			if (cities[i] == c)
				return i;
		return -1;
	}
    void printRouteMap()
    {
        cout << "\n--- Current Route Map (Distances) ---" << endl;
        cout << "City\t\t";
        for (int i = 0; i < MAX; i++) {
            cout << cities[i].substr(0, 4) << "\t";
        }
        cout << endl;

        for (int i = 0; i < MAX; i++) {
            cout << cities[i] << "\t";
            for (int j = 0; j < MAX; j++) {
                if (adj[i][j] == 0) {
                    cout << "0\t";
                }
                else {
                    cout << adj[i][j] << "\t";
                }
            }
            cout << endl;
        }
        cout << "------------------------------------" << endl;
    }
};
#endif // !GRAPH_H

