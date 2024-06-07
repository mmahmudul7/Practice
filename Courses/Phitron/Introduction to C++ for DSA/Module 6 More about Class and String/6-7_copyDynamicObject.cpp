#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name, int age){
            this->name = name;
            this->age = age;
        }
};

int main(){
    Person* rakib = new Person("Rakib Ahsan", 25);
    Person* sakib = new Person("Sakib Al Hasan", 35);

    *rakib = *sakib;
    delete sakib;

    cout << rakib->name << " " << rakib->age << endl;
    delete rakib;
    
    return 0;
}