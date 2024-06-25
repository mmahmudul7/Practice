#include <iostream>
#include <string>

using namespace std;

int main() {
    string N;
    cin >> N;
    
    // Reverse the number using a loop and remove leading zeros
    string reversed_N = "";
    bool leading_zero = true;

    for (int i = N.length() - 1; i >= 0; i--) {
        if (leading_zero && N[i] == '0') {
            continue;
        } else {
            leading_zero = false;
            reversed_N += N[i];
        }
    }

    // If reversed_N is still empty, it means the number was 0
    if (reversed_N == "") {
        reversed_N = "0";
    }

    // Check if the number is a palindrome
    bool isPalindrome = true;
    int len = N.length();
    for (int i = 0; i < len / 2; i++) {
        if (N[i] != N[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    // Print the reversed number without leading zeros
    cout << reversed_N << endl;
    // Print whether the number is a palindrome
    cout << (isPalindrome ? "YES" : "NO") << endl;

    return 0;
}