/*sample input
6 9
1 2
1 3
1 4
2 5
3 5
3 6
4 2
5 4
6 6
1
*/
#include <iostream>
#include <vector>
#define mx 500
std::vector<int> adj[mx]; // To hold adjacencies.
int nverts; // Number of vertices.
bool visited[mx]; // If aleady visited.

void dfs(int s) {
	// Mark source vertex as visited.
	visited[s] = true;
	/* Now, for all adjacent vertices of s check if it is already visited,
	 if not then visit it. */
	for (int i = 0; i < adj[s].size(); ++i)
		if (!visited[adj[s][i]])
			dfs(adj[s][i]); // Visit now.
	std::cout << s << "  "; // Print and show that we have reached this vertex.
}

int main(int argc, char const *argv[]) {
	// Input Graph.
	// Input number of vertices.
	std::cout << "Enter number of vertices : ";
	std::cin >> nverts;
	// Input number of edges.
	int edges;
	std::cout << "Enter number of edges : ";
	std::cin >> edges;
	// Input edges (u, v).
	int u, v;
	std::cout << "Enter edges :\n";
	for (int i = 0; i < edges; ++i) {
		std::cin >> u >> v;
		adj[u].push_back(v);
		// adj[v].push_back(u); // Uncomment for undirected graphs.
	}
	// Input source vertex to start traversal.
	std::cout << "Enter source vertex : ";
	std::cin >> u;
	// Finally call dfs function.
	dfs(u);
	return 0;
}
