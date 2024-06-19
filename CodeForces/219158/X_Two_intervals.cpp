#include <iostream>
using namespace std;

int main() {
    // ইনপুট নেওয়া
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // মিলনের সীমানা নির্ধারণ
    int start = max(l1, l2);
    int end = min(r1, r2);

    // যদি মিলন থাকে তবে তার সীমানা প্রিন্ট করা
    if (start <= end) {
        cout << start << " " << end << endl;
    } else {
        // মিলন না থাকলে -1 প্রিন্ট করা
        cout << -1 << endl;
    }

    return 0;
}
