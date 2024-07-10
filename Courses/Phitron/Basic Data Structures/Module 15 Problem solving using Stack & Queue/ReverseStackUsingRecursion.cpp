#include<bits/stdc++.h>
using namespace std;

void reverseStack(stack<int> &st) {
    if(st.empty()) return;
    int x = st.top();
    st.pop();

    reverseStack(st);

    stack<int> cp;
    while (!st.empty()) {
        cp.push(st.top());
        st.pop();
    }
    cp.push(x);

    while (!cp.empty()) {
        st.push(cp.top());
        cp.pop();
    }
}