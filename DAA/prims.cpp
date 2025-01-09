#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;
#define INF 9999999

void primMST(vector<vector<int>>& graph, int V) {
    vector<int> parent(V, -1);
    vector<int> key(V, INF);
    vector<bool> inMST(V, false);

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++) {
        int min = INF, u;

        for (int v = 0; v < V; v++)
            if (!inMST[v] && key[v] < min)
                min = key[v], u = v;

        inMST[u] = true;

        for (int v = 0; v < V; v++)
            if (graph[u][v] && !inMST[v] && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << " \n";
}

int main() {
    int V = 5;
    vector<vector<int>> graph = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    primMST(graph, V);

    return 0;
}