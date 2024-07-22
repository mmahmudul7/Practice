#include<bits/stdc++.h>
using namespace std;
int main(){
    float feet, inches;
    cout << "Zero keys, 0 to stop. \n";
    do {
        cout << "Please enter the feet amout: ";
        cin >> feet;

        inches = feet * 12;

        cout << feet << " = " << inches << " inches." <<"\n";
        
    } while (feet != 0);
    
    return 0;
}