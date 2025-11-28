#include <iostream>
#include <queue>
using namespace std;

class unweightedGraphs
{
private:
	int num_vertex;
	int** adj_matrix;
public:
	unweightedGraphs(int vertex)
	{
		num_vertex = vertex;
		adj_matrix = new int* [num_vertex];
		for (int i = 0; i < num_vertex; i++)
		{
			adj_matrix[i] = new int[num_vertex];
			for (int j = 0; j < num_vertex; j++)
			{
				adj_matrix[i][j] = 0;
				//insertEdge(i, j);
			}
		}
	}
	int getNumEdges()
	{
		int num_edges = 0;
		for (int i = 0; i < num_vertex; i++)
		{
			for (int j = 0; j < num_vertex; j++)
			{
				if (adj_matrix[i][j] == 1)
				{
					num_edges++;
				}
			}
		}
		return num_edges / 2;
	}
	//int getNumVertex();
	void insertEdge(int from_v, int to_v)
	{
		if (from_v >= 0 && from_v <= num_vertex && to_v <= num_vertex)
		{
			adj_matrix[from_v][to_v] = 1;
		}
		else
		{
			cout << "invalid input";
		}
	}
	void removeEdge(int from_v, int to_v)
	{
		if (from_v >= 0 && from_v <= num_vertex && to_v <= num_vertex)
		{
			adj_matrix[from_v][to_v] = 0;
		}
		else
		{
			cout << "invalid input";
		}
	}
	int degree(int vertex)
	{
		int degree = 0;
		for (int i = 0; i < num_vertex; i++)
		{
			if (adj_matrix[vertex][i] == 1)
			{
				degree++;
			}
		}
		return degree;
	}
	void bfs(int s)// code for bfs
	{
		if (s < 0 || s > num_vertex)
		{
			cout << "invalid input";
			return;
		}
		bool* visited = new bool[num_vertex];
		for (int i = 0; i < num_vertex; i++)
		{
			visited = false;
		}
		queue<int>q;
		q.push(s);
		visited[s] = true;
		//while (q.empty() != true)
		while (!q.empty())
		{
			int vertex = q.front();
			q.pop();
			cout << vertex;
			for (int i = 0; i < num_vertex; i++)
			{
				if (adj_matrix[vertex][i] == 1 && visited[i] == false)
				{
					visited[i] = false;
					q.push(i);
				}
			}
		}
	}
	void dfs(int u) {




		//u->visited = true;
		//for(each vertex of v suchthat (u,v) is E) {
		//	if (visited = false)
		//	{
		//		dfs(v);
		//	}
		//}


	}
	bool shortedtPathBFS(source, destination)
	{
		queue <int> q;

	}

};

// time complexity of insertEdge, removeEdge and degree is O(1)
// time complexity of getNumEdges is O(n^2)
// time complexity of bfs is O(n^2) for adjacency matrix representation
// time complexity of dfs is O(n^2) for adjacency matrix representation
// time complexity of bfs and dfs is O(n+E) for adjacency list representation
// space complexity of adjacency matrix is O(n^2)
// space complexity of adjacency list is O(n+E)
// space complexity of bfs and dfs is O(n) for visited array and queue/stack
// space complexity is worst in case of dfs and best for bfs in dense graphs that is when E is close to n^2
// rows indicate out degree in the graph...
// col indicate in degree in the graph...



////int main()
////{
////	unweightedGraphs g(5);
////	//g.graph(5);
////	g.insertEdge(0, 1);
////	g.insertEdge(0, 2);
////	g.insertEdge(1, 2);
////	g.insertEdge(2, 0);
////	g.insertEdge(2, 3);
////	g.insertEdge(3, 3);
////	cout << "Number of edges: " << g.getNumEdges() << endl;
////	cout << "Degree of vertex 2: " << g.degree(2) << endl;
////	cout << "BFS starting from vertex 2: ";
////	g.bfs(2);
////	cout << endl;
////	return 0;
////}
//
//
////DEFINE MAX VERTICES
//class node {
//	int vertex;
//	node* link;
//};
//node* adj_list[max_Vertex]; // adjacency list representation
//
//
//
//class weightedGrahs
//{
//private:
//	int num_vertex;
//	int** adj_matrix;
//public:
//	weightedGrahs(int vertex)
//	{
//		num_vertex = vertex;
//		adj_matrix = new int* [num_vertex];
//		for (int i = 0; i < num_vertex; i++)
//		{
//			adj_matrix[i] = new int[num_vertex];
//			for (int j = 0; j < num_vertex; j++)
//			{
//				adj_matrix[i][j] = 0;
//				//insertEdge(i, j);
//			}
//		}
//	}
//	int getNumEdges()
//	{
//		int num_edges = 0;
//		for (int i = 0; i < num_vertex; i++)
//		{
//			for (int j = 0; j < num_vertex; j++)
//			{
//				if (adj_matrix[i][j] == 1)
//				{
//					num_edges++;
//				}
//			}
//		}
//		return num_edges;
//	}
//	//int getNumVertex();
//	void insertEdge(int from_v, int to_v)
//	{
//		if (from_v >= 0 && from_v <= num_vertex && to_v <= num_vertex)
//		{
//			adj_matrix[from_v][to_v] = 1;
//		}
//		else
//		{
//			cout << "invalid input";
//		}
//	}
//	void removeEdge(int from_v, int to_v)
//	{
//		if (from_v >= 0 && from_v <= num_vertex && to_v <= num_vertex)
//		{
//			adj_matrix[from_v][to_v] = 0;
//		}
//		else
//		{
//			cout << "invalid input";
//		}
//	}
//	int degree(int vertex)
//	{
//		int degree = 0;
//		for (int i = 0; i < num_vertex; i++)
//		{
//			if (adj_matrix[vertex][i] == 1)
//			{
//				degree++;
//			}
//		}
//		return degree;
//	}
//	void bfs(int s)// code for bfs
//	{
//		if (s < 0 || s > num_vertex)
//		{
//			cout << "invalid input";
//			return;
//		}
//		bool* visited = new bool[num_vertex];
//		for (int i = 0; i < num_vertex; i++)
//		{
//			visited = false;
//		}
//		queue<int>q;
//		q.push(s);
//		visited[s] = true;
//		//while (q.empty() != true)
//		while (!q.empty())
//		{
//			int vertex = q.front();
//			q.pop();
//			cout << vertex;
//			for (int i = 0; i < num_vertex; i++)
//			{
//				if (adj_matrix[vertex][i] == 1 && visited[i] == false)
//				{
//					visited[i] = false;
//					q.push(i);
//				}
//			}
//		}
//	}
//	void dfs(int u) {
//
//
//
//
//		//u->visited = true;
//		//for(each vertex of v suchthat (u,v) is E) {
//		//	if (visited = false)
//		//	{
//		//		dfs(v);
//		//	}
//		//}
//
//
//	}
//
//};
//
//// time complexity of insertEdge, removeEdge and degree is O(1)
//// time complexity of getNumEdges is O(n^2)
//// time complexity of bfs is O(n^2) for adjacency matrix representation
//// time complexity of dfs is O(n^2) for adjacency matrix representation
//// time complexity of bfs and dfs is O(n+E) for adjacency list representation
//// space complexity of adjacency matrix is O(n^2)
//// space complexity of adjacency list is O(n+E)
//// space complexity of bfs and dfs is O(n) for visited array and queue/stack
//// space complexity is worst in case of dfs and best for bfs in dense graphs that is when E is close to n^2
//// rows indicate out degree in the graph...
//// col indicate in degree in the graph...
//
//
//
//int main()
//{
//	weightedGrahs g(5);
//	//g.graph(5);
//	g.insertEdge(0, 1);
//	g.insertEdge(0, 2);
//	g.insertEdge(1, 2);
//	g.insertEdge(2, 0);
//	g.insertEdge(2, 3);
//	g.insertEdge(3, 3);
//	cout << "Number of edges: " << g.getNumEdges() << endl;
//	cout << "Degree of vertex 2: " << g.degree(2) << endl;
//	cout << "BFS starting from vertex 2: ";
//	g.bfs(2);
//	cout << endl;
//	return 0;
//}

