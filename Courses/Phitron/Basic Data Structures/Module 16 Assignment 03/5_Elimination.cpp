#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        stack<char> st;

        for (char c : s) {
            if(c == '1' && !st.empty() && st.top() == '0')
                st.pop();
            else
                st.push(c);
        }

        // while (!st.empty()) {
        //     cout << st.top() << " ";
        //     st.pop();
        // }
        // cout << endl;
        

        if(st.empty())
            cout << "YES" << endl;
        else
           cout << "NO" << endl;
    }

    return 0;
}