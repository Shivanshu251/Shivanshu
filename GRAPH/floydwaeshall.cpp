#include <iostream>
#include <vector>
using namespace std;

#define INF 1e9

void floydWarshall(vector<vector<double>>& dist, int V) {

    for(int k = 0; k < V; k++) {

        for(int i = 0; i < V; i++) {

            for(int j = 0; j < V; j++) {

                if(dist[i][k] != INF &&
                   dist[k][j] != INF) {

                    dist[i][j] = min(dist[i][j],
                                     dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    cout << "Shortest Distance Matrix:\n";

    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {

            if(dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int V = 4;

    vector<vector<double>> dist = {
        {0,   3,   1e8, 7},
        {8,   0,   2,   1e8},
        {5,   1e8, 0,   1},
        {2,   1e8, 1e8, 0}
    };

    floydWarshall(dist, V);

    return 0;
}