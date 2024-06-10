#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    // cout << v[v.size() - 1];
    cout << v.back();
    cout << v[0];
    cout << v.front();
    cout << endl;
    
    //vector<int>::iterator it;
    for(auto it = v.begin(); it < v.end(); it++)
        cout << *it << " ";

    cout << endl;
    auto it = v.begin() ; // auto keyword এর সাহায্যে সহজে ইটারেটর ডিক্লেয়ার করা যায়

    while(it!=v.end()){
        cout << *it << endl; 
        it++ ;
    }

    return 0;    
}