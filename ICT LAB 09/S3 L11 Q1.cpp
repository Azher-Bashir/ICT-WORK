//#include <iostream>
//#include<queue>
//#include <stack>
//using namespace std;
//class Graph
//{
//public:
//	//part1: constructor initializes adjacency matrix
//	Graph(int numVertex)
//	{
//		numVertices = numVertex;
//		adj_matrix = new int* [numVertices];
//		for (int i = 0; i < numVertices; i++)
//		{
//			adj_matrix[i] = new int[numVertices];
//			for(int j = 0; j < numVertices; j++)
//			{
//				adj_matrix[i][j] = 0;
//			}
//		}
//	}
//	// CRITICAL FIX: Destructor for memory deallocation
//	~Graph()
//	{
//		for (int i = 0; i < numVertices; i++)
//		{
//			delete[] adj_matrix[i];
//		}
//		delete[] adj_matrix;
//	}
//	//part2: returns the number of vertices in the graph
//	int GetNumVertices()
//	{
//		return numVertices;
//	}
//	//part3: returns the number of edges in the graph
//	int numberOfEdges()
//	{
//		int num_edges = 0;
//		for (int i = 0; i < numVertices; i++)
//			{
//			for (int j = 0; j < numVertices; j++)
//			{
//				if (adj_matrix[i][j] == 1)
//				{
//					num_edges++;
//				}
//			}
//		}
//		return num_edges/2;
//	}
//	//part4: inserts edge going from one vertex to another
//	void insertEdge(int frmVertex, int toVertex)
//	{
//		if (frmVertex >= 0 && frmVertex < numVertices && toVertex >= 0 && toVertex < numVertices)
//		{
//			adj_matrix[frmVertex][toVertex] = 1;
//		}
//		else
//		{
//			cout << "invalid input";
//		}
//	}
//	//part5: removes edge going from one vertex to another
//	void removeEdge(int frmVertex, int toVertex)
//	{
//		if (frmVertex >= 0 && frmVertex < numVertices && toVertex >= 0 && toVertex < numVertices)
//		{
//			adj_matrix[frmVertex][toVertex] = 0;
//		}
//		else
//		{
//			cout << "invalid input";
//		}
//	}
//	//part6: returns the degree of the node passed
//	int degree(int vertex)
//	{
//		if (vertex < 0 || vertex >= numVertices)
//		{
//			return -1;
//		}
//		int degree = 0;
//		for (int i = 0; i < numVertices; i++)
//		{
//			if (adj_matrix[vertex][i] == 1)
//			{
//				degree++;
//			}
//		}
//		return degree;
//	}
//	//part7: outputs the order in which vertices are visited during DFS
//	//Starting from node s.
//	void depthfirstSearch(int s)
//	{
//		if (s < 0 || s >= numVertices)
//		{
//			cout << "Invalid output";
//			return;
//		}
//		bool* visited = new bool[numVertices];
//		for (int i = 0; i < numVertices; i++)
//		{
//			visited[i] = false;
//		}
//		stack<int> st;
//		st.push(s);
//		visited[s] = true;
//		while (!st.empty())
//		{
//			int vertex = st.top();
//			st.pop();
//			cout << "vertex: " << vertex << endl;
//			for (int i = 0; i < numVertices; i++)
//			{
//				if (adj_matrix[vertex][i] == 1 && visited[i] == false)
//				{
//					visited[i] = true;
//					st.push(i);
//				}
//			}
//		}
//		delete[] visited;
//
//	}
//	//part8: outputs the order in which vertices are visited during BFS
//	//Starting from node s.
//	void breadthfirstSearch(int s)
//	{
//		if (s < 0 || s >= numVertices)
//		{
//			cout << "Invalid output";
//			return;
//		}
//		bool* visited = new bool[numVertices];
//		for (int i = 0; i < numVertices; i++)
//		{
//			visited[i] = false;
//		}
//		queue<int> q;
//		q.push(s);
//		visited[s] = true;
//		while (!q.empty())
//		{
//			int vertex = q.front();
//			q.pop();
//			cout << "vertex: " << vertex << endl;
//			for (int i = 0; i < numVertices; i++)
//			{
//				if (adj_matrix[vertex][i] == 1 && visited[i] == false)
//				{
//					visited[i] = true;
//					q.push(i);
//				}
//			}
//		}
//		delete[] visited;
//
//	}
//private:
//	int** adj_matrix;
//	int numVertices;
//};
//int main()
//{
//	Graph* g;
//	g = new Graph(5);
//	g->insertEdge(0, 1);
//	g->insertEdge(0, 4);
//	g->insertEdge(1, 0);
//	g->insertEdge(1, 2);
//	g->insertEdge(1, 3);
//	g->insertEdge(1, 4);
//	g->insertEdge(2, 1);
//	g->insertEdge(2, 3);
//	g->insertEdge(3, 1);
//	g->insertEdge(3, 2);
//	g->insertEdge(3, 4);
//	g->insertEdge(4, 0);
//	g->insertEdge(4, 1);
//	g->insertEdge(4, 3);
//	cout << "Number of edges are " << g->numberOfEdges() << endl;
//	cout << "Degree of vertex " << g->degree(4) << endl;
//	cout << "Output for Depth first search starting from vertex 0 " << endl;
//	g->depthfirstSearch(0);
//	cout << "Output for Breadth first search starting from vertex 0 " << endl;
//	g->breadthfirstSearch(0);
//	delete g;
//	return 0;
//}