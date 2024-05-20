#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> dijkstra(int V, vector<vector<pair<int, int>>> &adj, int S) {
    vector<int> dist(V, INT_MAX);
    dist[S] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, S});

    while (!pq.empty()) {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto it : adj[node]) {
            int adjNode = it.first;
            int wt = it.second;

            if (dis + wt < dist[adjNode]) {
                dist[adjNode] = dis + wt;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
    return dist;
}

int main() {
    int V = 6;
    vector<vector<pair<int, int>>> adj(V);

    // Adding edges (node, weight)
    adj[0].push_back({1, 4});
    adj[0].push_back({2, 4});
    adj[1].push_back({2, 2});
    adj[1].push_back({0, 4});
    adj[2].push_back({3, 3});
    adj[2].push_back({5, 6});
    adj[2].push_back({4, 1});
    adj[3].push_back({2, 3});
    adj[3].push_back({5, 2});
    adj[4].push_back({3, 1});
    adj[5].push_back({3, 2});
    adj[5].push_back({4, 3});

    vector<int> shortestPaths = dijkstra(V, adj, 0);

    for (auto i : shortestPaths) {
        cout << i << " ";
    }

    return 0;
}
