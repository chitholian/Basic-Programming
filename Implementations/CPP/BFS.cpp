/*sample input
8 10
1 2
1 5
2 6
3 4
3 6
3 7
4 7
4 8
6 7
7 8
2
*/
#include <iostream>
#include <vector>
#include <queue>
#define mx 500
// Graph properties.
int nvert;// Number of vertices.
std::vector<int> adjacent[mx]; // Adjacent vertices.
bool visited[mx]; // If the vertex is already visited.
std::queue<int> queue; // Vertex queue.

void bfs(int source = 1) {
	// Insert the source into queue.
	queue.push(source);
	visited[source] = true; // Mark source as visited.
	// Ensure all vertices has visited,
	// to do so we work untill the queue is empty.
	while (!queue.empty()) {
		source = queue.front();
		queue.pop();
		// By printing it's value we show that we have visited this.
		std::cout << source << "  ";
		/* Now, for all adjacent vertices check if it is already visited,
		if not then push it into the queue.*/
		for (int i = 0; i < adjacent[source].size(); ++i) {
			if (!visited[adjacent[source][i]]) {
				// First mark this as visited.
				visited[adjacent[source][i]] = true;
				// Then push it into the queue.
				queue.push(adjacent[source][i]);
			}
		}
	}
}

int main(int argc, char const *argv[]) {
	// Input the graph.
	// Input number of vertices.
	std::cout << "Enter number of vertices : ";
	std::cin >> nvert;
	// Input number of edges.
	int nedge;// Number of edges.
	std::cout << "Enter number of edges : ";
	std::cin >> nedge;
	// Input edges.
	int u, v;
	std::cout << "Enter edges :\n";
	for (int i = 0; i < nedge; ++i) {
		std::cin >> u >> v;
		adjacent[u].push_back(v);
		adjacent[v].push_back(u); // Remove for directed graphs.
	}
	// Input source vertex to start visit from.
	std::cout << "Enter source vertex : ";
	std::cin >> u;
	// Finally call BFS function.
	bfs(u);
	return 0;
}
