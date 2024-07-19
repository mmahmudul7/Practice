/*Write a program to delete the nth element of a queue.
5
10 20 30 40 50
2

output: 10 30 40 50
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    stack<int> st;
    stack<int> stTmp;

    int sz;
    cin >> sz;
    for (int i = 0; i < sz; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }
    
    int n;
    cin >> n;

    int stSize = sz - n;
    for (int i = 0; i < stSize; i++) {
        stTmp.push(st.top());
        st.pop();
    }
    st.pop();
    
    while (!st.empty()) {
        stTmp.push(st.top());
        st.pop();
    }

    while (!stTmp.empty()) {
        q.push(stTmp.top());
        stTmp.pop();
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}