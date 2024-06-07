#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    
    int flag = 1;
    
    while (ss >> word) {
        if (word == "Jessica") {
            flag = 0;
            break;
        }
    }
    
    if(flag == 1){
        cout << "NO" <<endl;
    } else {
        cout << "YES" <<endl;
    }
    
    return 0;
}