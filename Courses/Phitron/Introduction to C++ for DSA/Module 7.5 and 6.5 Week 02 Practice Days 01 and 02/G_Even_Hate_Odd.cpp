#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++) {
            int ai;
            cin >> ai;

            if (ai % 2 == 0)
                even++;
            else
                odd++;
        }

        if (n % 2 != 0) {
            // If n is odd, we cannot balance even and odd counts
            cout << "-1" << endl;
        } else if (odd == even) {
            // If the number of evens and odds are already equal, no operation is needed
            cout << "0" << endl;
        } else {
            // Calculate the minimum number of operations needed
            cout << abs(even - odd) / 2 << endl;
        }
    }

    return 0;
}
