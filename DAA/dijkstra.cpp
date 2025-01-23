#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int N = 9;

int mindistvertex(int minD[], int visited[]) {
    int min = __INT_MAX__;
    int index = -1;
    for (int i = 0; i < N; i++) {
        if (minD[i] < min && visited[i] == 0) {
            min = minD[i];
            index = i;
        }
    }
    return index;
}

void dijkstra(int g[N][N], int s) {
    int minD[N];
    int visited[N] = {0};

    for (int i = 0; i < N; i++) {
        minD[i] = __INT_MAX__;
    }
    minD[s] = 0;

    for (int i = 0; i < N - 1; i++) {
        int cv = mindistvertex(minD, visited);
        if (cv == -1) break; // If no vertex is found, break the loop
        visited[cv] = 1;
        for (int iv = 0; iv < N; iv++) {
            if (visited[iv] == 0 && g[cv][iv] != 0 && minD[cv] != __INT_MAX__ && minD[iv] > (minD[cv] + g[cv][iv])) {
                minD[iv] = minD[cv] + g[cv][iv];
            }
        }
    }

    cout << "Vertex\tDistance from Source: " <<s<< endl;
    for (int i = 0; i < N; i++) {
        cout << i << "\t" << minD[i] << endl;
    }
}

int main() {
    int g[N][N] = {
        {0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}};

    for(int i=0;i<N;i++){
        dijkstra(g, i);
    }

    return 0;
}