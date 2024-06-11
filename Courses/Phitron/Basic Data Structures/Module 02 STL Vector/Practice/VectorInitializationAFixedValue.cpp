/*Write a C++ program to initialize a vector of size 5 with all elements set to the value N and print the elements.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    vector<int> v;
    v.resize(5, n);

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}