#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    int n;
    cin >> n; // stack er size input neya hose

    while (n--){
        int x;
        cin >> x;

        st.push(x);
    }

    while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}