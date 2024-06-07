#include<bits/stdc++.h>
using namespace std;
int main(){
    int *a = new int;
    float *f = new float;

    *a = 10;
    *f = 10.5632;

    cout << "a = " << *a << endl << "f = " << *f << endl;
    delete a;
    cout << "a = " << *a << endl << "f = " << *f << endl;

    return 0;
}