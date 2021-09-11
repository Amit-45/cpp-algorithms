/*
Dijkstra's algorithm is an algorithm for finding the shortest paths between nodes in a graph.
It is applicable for:
* Both directed and undirected graphs
* All edges must have None-Negative weights
* Graph must be connected
*/

#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef pair<int, int> pii;


vii *Graph;

vi Distance;

void Dijkstra(int start, int N)
{
    // min heap
    priority_queue<pii, vector<pii>, greater<pii>> Q;
    Distance.assign(N, INF);
    Distance[start] = 0;
    Q.push({0, start});
    while (!Q.empty())
    {
        int v1 = Q.top().second;
        Q.pop();
        for (auto &c : Graph[v1])
        {
            int v2 = c.first;
            int weight = c.second;
            if (Distance[v2] > Distance[v1] + weight)
            {
                Distance[v2] = Distance[v1] + weight;
                Q.push({Distance[v2], v2});
            }
        }
    }
}

int main()
{
    int N, M, v1, v2, weight, start;
    cin >> N >> M;
    Graph = new vii[N + 1];

    for (int i = 0; i < M; ++i)
    {
        cin >> v1 >> v2 >> weight;
        Graph[v1].push_back({v2, weight});
        Graph[v2].push_back({v1, weight});
    }
    cin >> start;
    Dijkstra(start, N);

    for (int i = 0; i < N; i++)
        cout << "Distance From " << start << " to Node " << i << " is " << Distance[i] << " " << endl;
    cout << endl;

    return 0;
}
