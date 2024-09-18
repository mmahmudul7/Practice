#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q1;
    queue<int> q2;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q1.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q2.push(x);
    }
    
    while (!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }

    while (!q1.empty()){
        cout << q1.front() << " ";
        q1.pop();
    }
    return 0;
}