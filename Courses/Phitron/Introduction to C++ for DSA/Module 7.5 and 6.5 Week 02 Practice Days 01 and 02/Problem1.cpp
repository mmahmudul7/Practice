#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b){
    if(a.marks > b.marks)
        return true;
    else if(a.marks < b.marks)
        return false;
    else return a.roll < b.roll;
}
int main(){
    int n;
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; i++){
        cin >> st[i].name >> st[i].roll >> st[i].marks;
    }
    
    sort(st, st + n, cmp);

    for (int i = 0; i < n; i++){
        cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    }
    
    return 0;
}