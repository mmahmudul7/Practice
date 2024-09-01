#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));

    while (e--){
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1; // for undirected graph
    }

    if (mat[3][1] == 1)
        cout << "Connectoin found";
    else
        cout << "Connectoin not found";
    
    return 0;
}