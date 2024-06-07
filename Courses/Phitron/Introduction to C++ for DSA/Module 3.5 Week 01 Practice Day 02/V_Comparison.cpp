#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    if(a > b){
        if(s == '>') cout << "Right\n";
        if(s == '<') cout << "Wrong\n";        
    } else if (a < b){
        if(s == '<') cout << "Right\n";
        if(s == '>') cout << "Wrong\n";  
    } else if (a == b){
        if(s == '=') cout << "Right\n";
        else cout << "Wrong\n"; 
    }
    if (a != b) {
        if(s == '=') cout << "Wrong\n";
    }

    return 0;
}