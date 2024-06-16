#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    int l = 0, r = n - 1;
    int mid = (l + r) / 2;

    int before = 0;
    int after = 0;
    for (int i = 0; i < mid; i++){
        before = before + a[i];
    }

    for (int i = mid + 1; i < n; i++){
        after = after + a[i];
    }

    if (before == after)
        cout << mid;

    return 0;
}