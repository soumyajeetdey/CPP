// Program to implement a graph and perform DFS and BFS

#include <iostream>
#include <vector>
#include <queue>
#include <stack>

class Graph {
private:
    std::vector<std::vector<int>> adjList;
    int numVertices;

public:
    Graph(int vertices) : numVertices(vertices) {
        adjList.resize(vertices);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void dfs(int startVertex) {
        std::vector<bool> visited(numVertices, false);
        std::stack<int> stack;

        stack.push(startVertex);
        visited[startVertex] = true;

        std::cout << "DFS traversal: ";
        while (!stack.empty()) {
            int currentVertex = stack.top();
            stack.pop();
            std::cout << currentVertex << " ";

            for (int neighbor : adjList[currentVertex]) {
                if (!visited[neighbor]) {
                    stack.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
        std::cout << std::endl;
    }

    void bfs(int startVertex) {
        std::vector<bool> visited(numVertices, false);
        std::queue<int> queue;

        queue.push(startVertex);
        visited[startVertex] = true;

        std::cout << "BFS traversal: ";
        while (!queue.empty()) {
            int currentVertex = queue.front();
            queue.pop();
            std::cout << currentVertex << " ";

            for (int neighbor : adjList[currentVertex]) {
                if (!visited[neighbor]) {
                    queue.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);

    g.dfs(0);
    g.bfs(0);

    return 0;
}
