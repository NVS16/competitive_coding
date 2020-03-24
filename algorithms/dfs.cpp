#include <iostream>
#include <vector>

using namespace std;

vector<vector <int>> G;
vector<int> visited;

void createEdge(int u, int v)
{
    G[u].push_back(v);
    // G[v].push_back(u);
}

void dfs(int source) 
{
    visited[source] = true;
    cout << source << "=>>>";
    for (auto i = G[source].begin(); i != G[source].end(); i++) {
        if (!visited[*i]) {
            dfs(*i);
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

    dfs(source);
    cout << "\n";

    return 0;
}