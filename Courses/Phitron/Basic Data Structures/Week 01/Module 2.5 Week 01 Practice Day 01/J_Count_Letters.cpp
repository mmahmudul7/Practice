#include <iostream>
#include <vector>
using namespace std;

int main() {
    char ch;
    vector<int> fq(26, 0);

    while (cin.get(ch)) {
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            fq[index] += 1;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (fq[i] > 0) {
            std::cout << static_cast<char>(i + 'a') << " : " << fq[i] << endl;
        }
    }

    return 0;
}