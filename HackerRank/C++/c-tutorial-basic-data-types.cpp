#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    long long int bigNum;
    char ch;
    float f;
    double d;
    
    cin >> num >> bigNum >> ch >> f >> d;
    
    cout << num << endl; 
    cout << bigNum << endl; 
    cout << ch << endl; 
    cout << fixed << setprecision(2) << f << endl;
    cout << fixed << setprecision(5) << d << endl;
    
    return 0;
}