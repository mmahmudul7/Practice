#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int group[N];

void dsu(int n){
    for (int i = 0; i < n; i++){
        parent[i] = -1;
        group[i] = 1;
    }
}

int dsuFind(int node){
    if (parent[node] == -1)
        return node;
    
    int leader = dsuFind(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsuUnion(int node1, int node2){
    int leaderA = dsuFind(node1);
    int leaderB = dsuFind(node2);

    if (group[leaderA] > group[leaderB]){
        parent[leaderB] = leaderA;
        group[leaderA] += group[leaderB];
    } else {
        parent[leaderA] = leaderB;
        group[leaderB] += group[leaderA];
    }
}

class Edge{
    public:
        int u, v, w;
        Edge(int u, int v, int w){
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

bool cmp(Edge a, Edge b){
    return a.w < b.w;
}

int main(){
    int n, e;
    cin >> n >> e;

    dsu(n);
    vector<Edge> edgeList;

    while (e--){
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    long long int totalCost = 0;
    int components = n;

    for (Edge ed : edgeList){
        int leaderU = dsuFind(ed.u);
        int leaderV = dsuFind(ed.v);
        if (leaderU == leaderV) continue;
        else {
            dsuUnion(ed.u, ed.v);
            totalCost += ed.w;
            components--;
        }
    }

    if (components == 1)
        cout << totalCost << endl;
    else
        cout << -1 << endl;

    return 0;
}