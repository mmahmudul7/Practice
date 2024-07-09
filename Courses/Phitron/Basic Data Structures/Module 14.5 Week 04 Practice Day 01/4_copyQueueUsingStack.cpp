#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    queue<int> qCpy;
    stack<int> st;
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while (!st.empty()){
        qCpy.push(st.top());
        st.pop();
    }

    while (!qCpy.empty()){
        cout << qCpy.front() << " ";
        qCpy.pop();
    }    
    
    return 0;
}