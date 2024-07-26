#include<iostream>
using namespace std;

class myclass {    
    public:
        // a now is public
        int a;
        // and there is no need for set_a() or get_a()
};

int main () {
    myclass ob1, ob2;

    // here a is accessed directly
    ob1.a = 10;
    ob2.a = 99;

    cout << ob1.a << "\n";
    cout << ob2.a << "\n";

    return 0;
}