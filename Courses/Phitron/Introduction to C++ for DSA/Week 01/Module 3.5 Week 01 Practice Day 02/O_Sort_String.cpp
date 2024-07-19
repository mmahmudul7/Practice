#include <iostream>
using namespace std;

int main() {
    long long int N;
    cin >> N;
    char S[N + 1];
    cin >> S;
    int count[26] = {0};
    
    for (int i = 0; i < N; i++) {
        count[S[i] - 'a']++;
    }
    
    int index = 0;
    for (int i = 0; i < 26; i++) {
        while (count[i]--) {
            S[index++] = 'a' + i;
        }
    }
    
    cout << S << endl;

    return 0;
}
