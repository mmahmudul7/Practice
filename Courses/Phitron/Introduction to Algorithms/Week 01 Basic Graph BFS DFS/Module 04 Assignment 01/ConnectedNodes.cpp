#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> graph(n);

    while (e--) {
        int a, b;
        cin >> a >> b;
        
        if (find(graph[a].begin(), graph[a].end(), b) == graph[a].end())
            graph[a].push_back(b);

        if (find(graph[b].begin(), graph[b].end(), a) == graph[b].end())
            graph[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;

        if (graph[x].empty())
            cout << -1 << endl;
        else {
            sort(graph[x].begin(), graph[x].end(), greater<int>()); 

            for (int node : graph[x])
                cout << node << " ";

            cout << endl;
        }
    }

    return 0;
}