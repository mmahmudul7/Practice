#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) { // Loop from 2 to sqrt(num)
        if (num % i == 0) return false; // If divisible, not prime
    }
    return true; // If no divisors found, it is prime
}

int main() {
    int N;
    cin >> N; // Read the input number

    vector<int> primes; // Vector to store prime numbers

    // Loop from 2 to N to find all prime numbers
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            primes.push_back(i); // Add prime numbers to the vector
        }
    }

    // Print all prime numbers separated by space
    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i];
        if (i != primes.size() - 1) { // Print space between numbers, not after the last number
            cout << " ";
        }
    }
    cout << endl; // New line after all numbers are printed

    return 0;
}