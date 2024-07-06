#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin >> t;

    while (t--){
        long long int l, r, n;
        cin >> l >> r;
        if (l > r){
            int tmp = l;
            l = r;
            r = tmp;
        }

        long long int sum = 0;
        n = r - l + 1;
        sum = (n * (l + r)) / 2;
        cout << sum << endl;        
    }
    
    return 0;
}