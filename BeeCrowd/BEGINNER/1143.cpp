#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1 || n >= 1000) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " " << i * i << " " << i * i * i << endl;
    }

    return 0;
}