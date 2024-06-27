#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    vector<int> luckyNumbers;

    // A থেকে B পর্যন্ত সব সংখ্যা চেক করি
    for (int i = A; i <= B; i++) {
        int n = i;
        bool isLucky = true;

        // প্রতিটি অংক চেক করি
        while (n > 0) {
            int digit = n % 10;
            if (digit != 4 && digit != 7) {
                isLucky = false;
                break;
            }
            n /= 10;
        }

        // যদি লাকি হয় তাহলে ভেক্টরে যোগ করি
        if (isLucky) {
            luckyNumbers.push_back(i);
        }
    }

    // লাকি নাম্বার না থাকলে -1 প্রিন্ট করি
    if (luckyNumbers.empty()) {
        cout << -1 << endl;
    } else {
        // লাকি নাম্বার প্রিন্ট করি
        for (int i = 0; i < luckyNumbers.size(); i++) {
            if (i > 0) {
                cout << " ";
            }
            cout << luckyNumbers[i];
        }
        cout << endl;
    }

    return 0;
}
