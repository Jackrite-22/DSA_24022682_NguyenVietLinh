#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <list>

using namespace std;

struct Graph {
    int V;
    vector<vector<int>> adj;

    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void DFS_helper(int v, bool visited[]) {
        visited[v] = true;
        cout << v << " ";

        for (int i = 0; i < adj[v].size(); i++) {
            int neighbor = adj[v][i];
            if (visited[neighbor] == false) {
                DFS_helper(neighbor, visited);
            }
        }
    }

    void DFS(int startNode) {
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++) {
            visited[i] = false;
        }

        DFS_helper(startNode, visited);

        delete[] visited;
    }


    void BFS(int startNode) {
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++) {
            visited[i] = false;
        }

        list<int> queue;

        visited[startNode] = true;
        queue.push_back(startNode);

        while (queue.empty() == false) {
            int v = queue.front();
            queue.pop_front();

            cout << v << " ";

            for (int i = 0; i < adj[v].size(); i++) {
                int neighbor = adj[v][i];
                if (visited[neighbor] == false) {
                    visited[neighbor] = true;
                    queue.push_back(neighbor);
                }
            }
        }

        delete[] visited;
    }
};

#endif // GRAPH_H
