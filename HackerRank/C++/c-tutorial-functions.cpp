#include <iostream>
using namespace std;

int greatestNum(int a, int b, int c, int d) {
    if(a > b && a > c && a > d)
        return a;
    else if(b > c && b > a && b > d)
        return b;
    else if(c > a && c > b && c > d)
        return c;
    else
     return d;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int g = greatestNum(a, b, c, d);
    
    cout << g;
    return 0;
}