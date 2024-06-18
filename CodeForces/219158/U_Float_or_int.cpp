#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    int pos = input.find('.');
    
    if (pos == -1)
        cout << "int " << input << endl;
    else {
        string integerPart = input.substr(0, pos);
        string decimalPart = input.substr(pos + 1);

        bool isZeroDecimal = true;
        for (char c : decimalPart) {
            if (c != '0') {
                isZeroDecimal = false;
                break;
            }
        }

        if (isZeroDecimal)
            cout << "int " << integerPart << endl;
        else
            cout << "float " << integerPart << " " << "0." + decimalPart << endl;
    }

    return 0;
}