#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    while (m--){
        int x;
        cin >> x;
        q.push(x);
    }

    bool flag = true;
    if(st.size() != q.size())
        cout << "NO";
    else {
        while(!st.empty()){
            if(st.top() != q.front()){
                    flag = false;
                    break;
            }
            st.pop();
            q.pop();
        }

        if(flag)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}