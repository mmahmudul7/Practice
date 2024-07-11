#include <bits/stdc++.h> 
using namespace std;

queue<int> reverseElements(queue<int> q, int k) {
    stack<int> st;

    for (int i = 1; i <= k; i++) {
        st.push(q.front());
        q.pop();
    }

    queue<int> cp;
    while (!st.empty()) {
        cp.push(st.top());
        st.pop();
    }

    while (!q.empty()) {
        cp.push(q.front());
        q.pop();
    }

    return cp;    
    
}