#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;

        Student(string name, int roll, int marks){
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};

class cmp{
    public:
        bool operator()(Student a, Student b) {
            if (a.marks == b.marks) {
                return a.roll > b.roll;
            }
            return a.marks < b.marks;
        }
};

int main(){
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;

    while (n--){
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    int q;
    cin >> q;
    while (q--){
        int c;
        cin >> c;

        if (c == 0){
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            
            if (pq.empty())
                cout << "Empty" << endl;
            else{
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            }
        } else if (c == 1){
            if (pq.empty())
                cout << "Empty" << endl;
            else{
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            }
        } else if (c == 2){
            if (pq.empty())
                cout << "Empty" << endl;
            else{
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else{
                    Student topStudent = pq.top();
                    cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
                }
            }
        }
    }

    return 0;
}