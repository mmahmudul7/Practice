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

int main(){
    int n, e, cnt = 0;
    cin >> n >> e;
    dsu(n);

    while (e--){
        int a, b;
        cin >> a >> b;
        if (dsuFind(a) == dsuFind(b)) cnt++;
        else dsuUnion(a, b);
    }

    cout << cnt << endl;
    
    return 0;
}