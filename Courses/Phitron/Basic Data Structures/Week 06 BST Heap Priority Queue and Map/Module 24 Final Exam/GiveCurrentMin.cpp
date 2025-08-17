#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> mn;

    while (n--){
        int num;
        cin >> num;
        mn.push(num);
    }

    int q;
    cin >> q;

    while (q--) {
        int c;
        cin >> c;

        if (c == 0){
            int x;
            cin >> x;
            mn.push(x);
            cout << mn.top() << endl;
        } else if (c == 1){
            if (mn.empty())
                cout << "Empty" << endl;
            else
                cout << mn.top() << endl;
        } else if (c == 2){
            if (mn.empty())
                cout << "Empty" << endl;
            else {
                mn.pop();
                if (mn.empty())
                    cout << "Empty" << endl;
                else
                    cout << mn.top() << endl;
            }
        }
    }

    return 0;
}