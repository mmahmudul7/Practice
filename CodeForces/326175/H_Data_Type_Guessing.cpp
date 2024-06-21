#include <iostream>
#include <limits>
using namespace std;

int main() {
    unsigned int n, k, a;
    cin >> n >> k >> a;
    
    unsigned long long product = (unsigned long long)n * k;
    
    if (product % a == 0) {
        unsigned long long division_result = product / a;
        
        if (division_result <= numeric_limits<int>::max())
            cout << "int" << endl;
        else
            cout << "long long" << endl;
    } else
        cout << "double" << endl;
    
    return 0;
}