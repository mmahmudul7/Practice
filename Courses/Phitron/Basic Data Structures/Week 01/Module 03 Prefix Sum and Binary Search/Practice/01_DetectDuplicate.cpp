#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (x == a[i])
            cnt++;
    }

    if (cnt > 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
        
    return 0;
}