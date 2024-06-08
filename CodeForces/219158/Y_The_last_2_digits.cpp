#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    int result =  a * b * c * d;

    if(result % 100 <= 9)
        cout << 0;
    
    cout << result % 100 << endl;

    return 0;
}