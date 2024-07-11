#include<bits/stdc++.h>
using namespace std;

string kevinStackProblem(string &s) {
    stack<char> st;

	for (char c : s) {
		st.push(c);
    }

    string rs = "";
    while (!st.empty()) {
        rs += st.top();
        st.pop();
    }

    return rs;    
}