#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    // if (N < 1 || N > 45) {
    //     return 1;
    // }

    if (N >= 1) cout << "0";
    if (N >= 2) cout << " 1";
    
    int a = 0, b = 1, c;
    for (int i = 3; i <= N; ++i) {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
    cout << endl;

    return 0;
}
