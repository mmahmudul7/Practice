#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> a;
    queue<int> b;
    int n, m;
    cin >> n >> m;
    while (n--) {
        int x;
        cin >> x;
        a.push(x);
    }
    while (m--) {
        int x;
        cin >> x;
        b.push(x);
    }
    
    if(a.size() != b.size())
        cout << "NO";
    else {
        bool flag = true;
        while (!a.empty()) {
            if(a.top() != b.front()) {
                flag = false;
                break;
            }
            a.pop();
            b.pop();
        }
        if(flag)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}