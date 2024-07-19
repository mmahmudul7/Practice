#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[101];
    char section;
    int mark;
};

int main()
{
    // Write your code here
    int t;
    cin >> t;
    while (t--) {
        Student students[3];
        
        for (int i = 0; i < 3; i++) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].mark;
        }
        
        Student h_mark = students[0];
        if(students[1].mark > h_mark.mark){
            h_mark = students[1];
        } else if (students[1].mark == h_mark.mark && students[1].id < h_mark.id){
            h_mark = students[1];
        }
        
        if(students[2].mark > h_mark.mark){
            h_mark = students[2];
        } else if (students[2].mark == h_mark.mark && students[2].id < h_mark.id){
            h_mark = students[2];
        }

        cout << h_mark.id << " " << h_mark.name << " " << h_mark.section << " " << h_mark.mark << endl;
    }

    return 0;
}
