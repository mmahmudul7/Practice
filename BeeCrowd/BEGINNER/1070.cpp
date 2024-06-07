#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int range = x + 11;
    
    if(x % 2 == 1) {
        for(int i = x; i <= range; i += 2)
          cout << i << endl;
            
    } else {
        for(int i = x + 1; i <= range; i += 2)
          cout << i << endl;
    }
    
    return 0;
}