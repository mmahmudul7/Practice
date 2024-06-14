#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        float a, b, c;
        cin >> a >> b >> c;
        
        float weighted_average = (a * 2 + b * 3 + c * 5) / 10;
        
        cout << fixed << setprecision(1) << weighted_average << endl;
    }
    
    return 0;
}
