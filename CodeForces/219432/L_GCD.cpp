#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << gcd(A, B) << endl;
    return 0;
}