#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st_main;
    stack<int> st_cpy;
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        st_main.push(x);
    }

    // st_cpy = st_main;

    while (!st_main.empty()){
        st_cpy.push(st_main.top());
        st_main.pop();
    }
    
    while (!st_cpy.empty()){
        cout << st_cpy.top() << " ";
        st_cpy.pop();
    }

    return 0;
}