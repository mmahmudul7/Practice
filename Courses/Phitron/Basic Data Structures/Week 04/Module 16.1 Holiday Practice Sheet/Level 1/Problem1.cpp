/*Write a C++ program that returns the elements in a vector that are strictly smaller than their 
adjacent left and right neighbours. First it take input of number of element then a vector*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());

    for (int i = 0; i < 2; i++)
        cout << v[i] << endl;    

    return 0;
}