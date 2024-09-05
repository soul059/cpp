// simple graph programe with adjacency matrix and traversal with dfs and bfs
#include <iostream>
#include <queue>
using namespace std;

class Graph
{
private:
    int n;
    int **adj;

public:

    Graph(int n)
    {
        this->n = n;
        adj = new int *[n];
        for (int i = 0; i < n; i++)
        {
            adj[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
                adj[i][j] = 0;
            }
        }
    }

    void addEdge(int origin, int destin)
    {
        if (origin > n || destin > n || origin < 0 || destin < 0)
        {
            cout << "Invalid edge!\n";
        }
        else
        {
            adj[origin - 1][destin - 1] = 1;
        }
    }

    void display()
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }

    void DFS(int start)
    {
        static int visited[10] = {0};
        cout << start << " ";
        visited[start] = 1;
        for (int i = 0; i < n; i++)
        {
            if (adj[start][i] == 1 && visited[i] == 0)
            {
                DFS(i);
            }
        }
    }

    void BFS(int start)
    {
        int i, j;
        static int visited[10] = {0};
        queue<int> q;
        cout << start << " ";
        visited[start] = 1;
        q.push(start);
        while (!q.empty())
        {
            i = q.front();
            q.pop();

            for (j = 0; j < n; j++)
            {
                if (adj[i][j] == 1 && visited[j] == 0)
                {
                    cout << j << " ";
                    visited[j] = 1;
                    q.push(j);
                }
            }
        }
    }
};

int main()
{
    int nodes, max_edges, origin, destin;
    cout << "Enter number of nodes: ";
    cin >> nodes;
    Graph g(nodes);
    max_edges = nodes * (nodes - 1);

    for (int i = 0; i < max_edges; i++)
    {
        cout << "Enter edge (-1 -1 to exit): ";
        cin >> origin >> destin;
        if (origin == -1 && destin == -1)
        {
            break;
        }
        g.addEdge(origin, destin);
    }

    cout << "Adjacency matrix is: ";
    g.display();

    cout << "Enter starting node for Depth First Search: ";
    cin >> origin;
    cout << "DFS is: ";
    g.DFS(origin - 1);
    g.BFS(origin - 1);

    return 0;
}