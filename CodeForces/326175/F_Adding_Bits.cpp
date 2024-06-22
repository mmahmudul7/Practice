#include <iostream>
using namespace std;

unsigned int bitwise_addition(unsigned int a, unsigned int b) {
    return a ^ b;
}

int main() {
    unsigned int a, b;
    cin >> a >> b;
    cout << bitwise_addition(a, b) << endl;
    return 0;
}