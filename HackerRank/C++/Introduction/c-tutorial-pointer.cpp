#include <iostream>
#include <cmath>
using namespace std;

void func(int *a, int *b){
    int tmp = *a;
    *a = *a + *b;
    *b = abs(tmp - *b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    int *ptra = &a;
    int *ptrb = &b;
    cin >> a >> b;
    
    func(ptra, ptrb);
    
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}