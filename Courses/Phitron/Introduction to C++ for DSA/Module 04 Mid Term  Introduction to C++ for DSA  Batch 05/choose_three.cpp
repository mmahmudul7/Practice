#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int t, n, sum;
    cin >> t;
    while(t--){
      cin >> n >> sum;
      int a[n];
      int flag = 1;
      for (int i = 0; i < n; i++){
        cin >> a[i];
      }
      
      for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n - 1; j++){
          for (int k = j + 1; k < n; k++){
            if (a[i] + a[j] + a[k] == sum){
              flag = 0;
            }
          }
        }
      }
      
      if (flag == 0){
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
    
    return 0;
}
