#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        int mark1;
        int mark2;
        Person(string nm, int ag, int m1, int m2){
            name = nm;
            age = ag;
            mark1 = m1;
            mark2 = m2;
        }
        int total_marks(){
            return mark1 + mark2;
        }
        void hello(){
            cout << name << " " << age << endl;
        }
};
int main(){
    Person rakib("Rakib Ahsan",24, 95, 85);
    cout << rakib.name << " " << rakib.age << endl;
    cout << rakib.total_marks() << endl;
    rakib.hello();
    
    return 0;
}