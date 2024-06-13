/*Write a C++ program to initialize a vector with the integers from 1 to N and print the elements*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers;
    for (int i = 1; i <= n; i++){
        numbers.push_back(i);
    }
    
    for (int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    

    return 0;
}
