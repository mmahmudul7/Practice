#include<iostream>
using namespace std;

class myclass {
    // private to myclass
    int a;
    public:
        void set_a(int num);
        int get_a();
};

void myclass::set_a(int num) {
    a = num;
}

int myclass::get_a() {
    return a;
}

int main () {
    myclass ob1, ob2;

    ob1.a = 10;
    ob2.a = 99;

    // ob1.set_a(10);
    // ob2.set_a(99);

    cout << ob1.get_a() << "\n";
    cout << ob2.get_a() << "\n";

    return 0;
}