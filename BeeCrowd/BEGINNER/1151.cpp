#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    if (n >= 1) cout << "0";
    if (n >= 2) cout << " 1";
    
    int a = 0, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
    cout << endl;

    return 0;
}