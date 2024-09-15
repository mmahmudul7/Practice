#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1001;
ll INF = 1e18;
vector<pair<int, int>> v[N];
ll dis[N];
bool vis[N];

class cmp{
    public:
        bool operator()(pair<int, int> a, pair<int, int> b){
            return a.second > b.second;
        }
};

void dijkstra(int src){
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty()){
        pair<int, int> parent = pq.top();
        pq.pop();

        int node = parent.first;
        int cost = parent.second;

        if (vis[node]) continue;
        vis[node] = true;

        for (pair<int, int> child : v[node]){
            int childNode = child.first;
            int childCost = child.second;

            if (cost + childCost < dis[childNode]){
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    int n, e, src, t;
    cin >> n >> e;

    while (e--){
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }

    cin >> src;
    for (int i = 1; i <= n; i++){
        dis[i] = INF;
        vis[i] = false;
    }

    dijkstra(src);

    cin >> t;
    while (t--){
        int d, dw;
        cin >> d >> dw;

        if (dis[d] <= dw)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}