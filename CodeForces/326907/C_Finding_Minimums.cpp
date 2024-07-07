#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    
    for (int i = 0; i < N; i += K) {
        int min_value = numbers[i];
        for (int j = i + 1; j < i + K && j < N; j++) {
            if (numbers[j] < min_value) {
                min_value = numbers[j];
            }
        }
        cout << min_value << " ";
    }
    
    return 0;
}
