#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector <int>> G;
vector<bool> visited; 

void createEdge(int u, int v)
{
    G[u].push_back(v);
    // G[v].push_back(u);
}

void bfs (int source)
{
    queue<int> q;
    int u;
    
    visited[source] = true;
    q.push(source);

    while (!q.empty()) {
        u = q.front();
        q.pop();
        cout << u << " =>>> ";

        for (auto i = G[u].begin(); i != G[u].end(); i++) {
            if (!visited[*i]) {
                q.push(*i);
                visited[*i] = true;
            }
        }

    }
}

int main ()
{
    int n, e, source, u, v;

    cin >> n >> e;

    visited.assign(n, false);
    G.assign(n, vector<int>());

    for (int i = 0; i < e; i++) {
        cin >> u >> v;
        createEdge(u, v);
    }

    cin >> source;

    bfs(source);
    cout << "\n";

    return 0;
}