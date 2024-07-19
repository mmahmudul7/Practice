#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    string word;
    cin >> word;

    stringstream ss(s);
    int count = 0;
    while (ss >> word){
        if(word == "john"){
            count++;
        }
    }

    cout << count;
    
    return 0;
}