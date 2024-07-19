/*Write a program to implement a stack and accept some numeric values. Find
kth element of the stack.
input:
5
20 10 50 40 70
2

output: 10
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    stack<int> tmp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }
    int k;
    cin >> k;
    int tmpSz = n - k;

    for (int i = 0; i < tmpSz; i++) {
        tmp.push(st.top());
        st.pop();
    }

    cout << st.top(); 

    return 0;
}
