#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
int parentArray[N];
bool ans;

void dfs(int parent){
    vis[parent] = true;
    // cout << parent << endl;

    for (int child : adj[parent]){
        if(vis[child] == true && parentArray[parent] != child)
                ans = true;
                // cout << parent << " " << child << " " << parentArray[parent] << endl;

        if(vis[child] == false){
            parentArray[child] = parent;
            dfs(child);
        }
    }   
}

int main(){
    int n, e;
    cin >> n >> e;

    while (e--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parentArray, false, sizeof(parentArray));
    ans = false;

    for (int i = 0; i < n; i++)
        if(!vis[i])
            dfs(i);

    if(ans) cout << "Cycle found";
    else cout << "Cycle not found";
    
    return 0;
}

/*
7 6
0 1
1 2
3 4
4 5
5 6
6 3

2 1
0 1

4 3
0 1
1 2
0 3
*/