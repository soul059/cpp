// diktras's sortest path algo 

#include<iostream>
using namespace  std;

class Graph{
    int V;
    int **graph;
    public:
    Graph(int V){
        this->V = V;
        graph = new int*[V];
        for(int i=0;i<V;i++){
            graph[i] = new int[V];
            for(int j=0;j<V;j++){
                graph[i][j] = 0;
            }
        }
    }
    void addEdge(int u,int v,int w){
        graph[u][v] = w;
        graph[v][u] = w;
    }
    void dikstra(int src){
        int dist[V];
        bool sptSet[V];
        for(int i=0;i<V;i++){
            dist[i] = INT_MAX;
            sptSet[i] = false;
        }
        dist[src] = 0;
        for(int i=0;i<V-1;i++){
            int u = minDistance(dist,sptSet);
            sptSet[u] = true;
            for(int v=0;v<V;v++){
                if(!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]){
                    dist[v] = dist[u] + graph[u][v];
                }
            }
        }
        printSolution(dist,V);
    }
    int minDistance(int dist[],bool sptSet[]){
        int min = INT_MAX;
        int min_index;
        for(int i=0;i<V;i++){
            if(!sptSet[i] && dist[i] <= min){
                min = dist[i];
                min_index = i;
            }
        }
        return min_index;
    }
    void printSolution(int dist[],int n){
        cout<<"Vertex \t Distance from Source\n";
        for(int i=0;i<V;i++){
            cout<<i<<" \t "<<dist[i]<<endl;
        }
    }
};


int main(){
    Graph g(9);
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);
    g.dikstra(0);
    return 0;
}