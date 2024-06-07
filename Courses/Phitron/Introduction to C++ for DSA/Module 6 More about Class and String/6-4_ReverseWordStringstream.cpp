#include<bits/stdc++.h>
using namespace std;
void func(stringstream& ss){
    string word;
    if(ss >> word){
        func(ss);
        cout << word << endl;
    }
}
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    func(ss);
    
    return 0;
}