#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];    

    sort(a, a + n);
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;

        bool flag = false;
        int l = 0, r = n - 1;

        while (l <= r) {
            int mid = (l + r) / 2;

            if(a[mid] == x) {
                flag = true;
                break;
            }
            if (x > a[mid])
                l = mid + 1;
            else
                r = mid -1;
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    
    return 0;
}