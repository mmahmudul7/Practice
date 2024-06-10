#include<bits/stdc++.h>
using namespace std;
int main(){
    //find
    vector<int>v = {1,2,2,4,3,5,1,2,4,5,3,2};
    //vector<int>:: iterator it;
    auto it = find(v.begin(), v.end(), 3);
    if(it == v.end()) cout << "Not found.";
    else cout << "Found.";
    
    return 0;
}