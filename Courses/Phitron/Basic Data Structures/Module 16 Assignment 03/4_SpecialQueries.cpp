#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    queue<string> qu;
    while (q--) {
        int num;
        string name;
        cin >> num;

        if (num == 0) {
            cin >> name;
            qu.push(name);
        } else if (num == 1) {
            if (qu.empty()) {
                cout << "Invalid" << endl;
            } else {
                cout << qu.front() << endl;
                qu.pop();
            }
        }
    }    
    
    return 0;
}