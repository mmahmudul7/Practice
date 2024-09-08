#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
vector<int> graph[N];

int main() {
    int n, e, q;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }

    cin >> q;
    while (q--) {
        int src, des;
        cin >> src >> des;

        if (src == des) {
            cout << "YES" << endl;
            continue;
        }

        bool found = false;
        for (int child : graph[src]) {
            if (child == des) {
                found = true;
                break;
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}