#include <iostream>
using namespace std;

int main() {
    char S;
    int N;
    
    cin >> S;
    cin >> N;
    
    int number;
    for(int i = 0; i < N; ++i) {
        cin >> number;
        for(int j = 0; j < number; ++j) {
            cout << S;
        }
        cout << endl;
    }
    
    return 0;
}