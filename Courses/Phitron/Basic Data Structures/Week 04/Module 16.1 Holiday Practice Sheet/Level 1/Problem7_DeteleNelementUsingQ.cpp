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
    queue<int> cpy;

    int sz;
    cin >> sz;
    for (int i = 1; i <= sz; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    
    int n;
    cin >> n;

    int stSize = sz - n;
    for (int i = 1; i < stSize - 1; i++) {
        cpy.push(q.front());
        q.pop();
    }
    q.pop();
    
    while (!q.empty()) {
        cpy.push(q.front());
        q.pop();
    }

    while (!cpy.empty())
    {
        cout << cpy.front() << " ";
        cpy.pop();
    }
    
    return 0;
}