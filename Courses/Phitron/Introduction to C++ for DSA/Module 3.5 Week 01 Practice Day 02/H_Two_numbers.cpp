#include<bits/stdc++.h>
using namespace std;
int main(){
    float a, b, ans;
    cin >> a >> b;

    ans = a / b;

    cout <<"floor " << a << " / " << b << " = " << floor(ans) << endl;
    cout <<"ceil " << a << " / " << b << " = " << ceil(ans) << endl;
    cout <<"round " << a << " / " << b << " = " << round(ans) << endl;


    
    return 0;
}