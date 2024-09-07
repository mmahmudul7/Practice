#include <bits/stdc++.h>
using namespace std;

char graph[1001][1001];
bool vis[1001][1001];

int n, m;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool valid(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < m && graph[x][y] == '.')
        return true;
    else
        return false;
}

int dfs(int si, int sj) {
    vis[si][sj] = true;
    int rooms = 1;

    for (int i = 0; i < 4; i++) {
        int ci = si + dx[i];
        int cj = sj + dy[i];

        if (valid(ci, cj) && vis[ci][cj] == false) {
            vis[ci][cj] = true;
            rooms += dfs(ci, cj);
        }
    }
    return rooms;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> graph[i][j];
    }

    vector<int> sizes;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (graph[i][j] == '.' && vis[i][j] == false) {
                int rooms = dfs(i, j);
                sizes.push_back(rooms);
            }
        }
    }

    if (sizes.empty())
        cout << "0";
    else {
        sort(sizes.begin(), sizes.end());
        for(int size : sizes)
            cout << size << " ";
    }
    
    return 0;
}