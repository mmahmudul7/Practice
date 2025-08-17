#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;

        set<int> unNumbers;
        while (n--){
            int x;
            cin >> x;
            unNumbers.insert(x);
        }
        
        for (auto it = unNumbers.begin(); it != unNumbers.end(); it++)
            cout << *it << " ";
        cout << endl;
    }

    return 0;
}