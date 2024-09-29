#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int ci, int cj) {
    if (ci < 0 || ci >= n || cj < 0 || cj >= m || a[ci][cj] == '-' || vis[ci][cj])
        return false;
    
    return true;
}

int dfs(int si, int sj){
    vis[si][sj] = true;
    int area = 1;

    for (int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) == true && vis[ci][cj] == false)
            area += dfs(ci, cj);
    }

    return area;
}

int main(){
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    memset(vis, false, sizeof(vis));
    int minArea = INT_MAX;
    bool found = false;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == '.' && !vis[i][j]){
                int comp = dfs(i, j);
                minArea = min(minArea, comp);
                found = true;
            }
        }
    }

    if (found)
        cout << minArea << endl;
    else
        cout << -1 << endl;
    
    return 0;
}