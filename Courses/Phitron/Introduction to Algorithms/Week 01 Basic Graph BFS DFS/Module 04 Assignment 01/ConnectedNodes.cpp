#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e, q;
    cin >> n >> e;

    vector<vector<int>> graph(n);

    while (e--) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    cin >> q;
    while (q--) {
        int x;
        cin >> x;

        if (graph[x].empty())
            cout << -1 << endl;
        else {
            sort(graph[x].begin(), graph[x].end(), greater<int>()); 

            for (int i = 0; i < graph[x].size(); i++)
                cout << graph[x][i] << " ";
            
            cout << endl;
        }
    }

    return 0;
}