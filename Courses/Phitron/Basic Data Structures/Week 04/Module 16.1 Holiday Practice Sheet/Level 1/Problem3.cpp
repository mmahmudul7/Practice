/*Write a c++ program where it takes q query and is query have some input x
● For input x==1 it take another value val1 as input, you need to push a value at 2nd index
of vector. If vector is empty push it at first index.
● For input x==2 it take another value val2 as input, you need to push a value at 2nd index
from last of vector. If vector is empty push it at first index from last.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    vector<int> v;

    while (q--) {
        int x;
        cin >> x;

        if(x == 1) {
            int val1;
            cin >> val1;
            if(v.empty()){
                v.insert(v.begin() + 0, val1);
            } else {
                v.insert(v.begin() + 1, val1);
            }
        }
        if (x == 2) {
            int val2;
            cin >> val2;
            if(v.empty()){
                v.push_back(val2);
            } else {
                v.insert(v.end() - 1, val2);
            }
        }
    }

    for (int val : v)
        cout << val << " ";

    return 0;
}