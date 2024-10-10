#include <bits/stdc++.h>
using namespace std;

int num;
bool dp[100001];

bool rec(int n){
    if (n > num)
        return false;
    if (n == num)
        return true;
    if (dp[n])
        return false;
    dp[n] = true;

    return rec(n + 3) || rec(n * 2);
}

int main(){
    int t;
    cin >> t;

    while (t--){
        cin >> num;
        memset(dp, 0, sizeof(dp));

        bool flag = rec(1);

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}