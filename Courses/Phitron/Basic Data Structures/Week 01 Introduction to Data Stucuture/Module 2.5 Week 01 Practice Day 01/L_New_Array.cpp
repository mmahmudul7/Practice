#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N), C;

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }

    for(int i = 0; i < N; i++) {
        C.push_back(B[i]);
    }

    for(int i = 0; i < N; i++) {
        C.push_back(A[i]);
    }

    for(int i = 0; i < C.size(); i++) {
        cout << C[i] << " ";
    }

    return 0;
}
