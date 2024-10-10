#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;  
        int h[n];

        for (int i = 0; i < n; i++)
            cin >> h[i];  
    
        int m1 = -1, m2 = -1;  
        int idx1 = -1, idx2 = -1;  

        for (int i = 0; i < n; i++){
            if (h[i] > m1){
                m2 = m1;  
                idx2 = idx1;  
                m1 = h[i];  
                idx1 = i;  
            } else if (h[i] > m2){
                m2 = h[i];  
                idx2 = i;  
            }
        }

        if (idx1 > idx2)
            swap(idx1, idx2);
        
        cout << idx1 << " " << idx2 << endl;
    }

    return 0;
}