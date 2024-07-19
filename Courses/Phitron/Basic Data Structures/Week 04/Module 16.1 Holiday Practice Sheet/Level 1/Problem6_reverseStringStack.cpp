/*Write a program that accepts a string and reverse it using a stack.
output: nortihp
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char> st;
    string name;
    cin >> name;

    for(char ch : name) {
        st.push(ch);
    }

    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }

    return 0;
}