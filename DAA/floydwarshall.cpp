#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

const int N = 5;
const int INF = 1000;


void floydWarshall(int g[N][N]){
    int dist[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            dist[i][j] = g[i][j];
        }
    }

    for(int k=0; k<N; k++){
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(dist[i][k] + dist[k][j] < dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int g[N][N] = {
        {0,3,8,INF,-4},
        {INF,0,INF,1,7},
        {INF,4,0,INF,INF},
        {2,INF,-5,0,INF},
        {INF,INF,INF,6,0},
    };
    floydWarshall(g);
    return 0;
}