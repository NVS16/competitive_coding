#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<vector <pair<int, int>>> G;
vector<pair<pair<int, int>, int>> edges; 

void createEdge(int u, int v, int w)
{
    G[u].push_back(make_pair(v, w));
    G[v].push_back(make_pair(u, w));

    edges.push_back(make_pair(make_pair(u, v), w));
}

int kruskal(int source)
{

    return minCost;
}

int main ()
{
    int n, e, source, u, v;

    cin >> n >> e;

    G.assign(n, vector<int>());

    for (int i = 0; i < e; i++) {
        cin >> u >> v >> w;
        createEdge(u, v, w);
    }

    cin >> source;

    cout << kruskal(source);
    cout << "\n";

    return 0;
}