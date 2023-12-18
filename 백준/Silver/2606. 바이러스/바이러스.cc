#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true; 

    for (int i = 0; i < graph[node].size(); ++i) {
        int nextNode = graph[node][i];
        if (!visited[nextNode]) { 
            dfs(nextNode, graph, visited); 
        }
    }
}

int main() {
    int computers, edges;
    cin >> computers >> edges;

    vector<vector<int>> graph(computers + 1); 
    vector<bool> visited(computers + 1, false); 

    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(1, graph, visited);

    int count = 0;
    
    for (int i = 1; i <= computers; ++i) {
        if (visited[i]) {
            count++;
        }
    }

    
    cout << count - 1 << endl; 

    return 0;
}
