#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b){
    if(a.eng_marks != b.eng_marks)
        return a.eng_marks > b.eng_marks;
    else if(a.math_marks != b.math_marks)
        return a.math_marks > b.math_marks;
    else
        return a.id < b.id;
}
int main(){
    int n;
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; i++){
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id
        >> st[i].math_marks >> st[i].eng_marks;
    }
    
    sort(st, st + n, cmp);

    for (int i = 0; i < n; i++){
        cout << st[i].nm << " " << st[i].cls << " "  << st[i].s << " "  << st[i].id
        << " " << st[i].math_marks  << " " << st[i].eng_marks<< endl;
    }
    
    return 0;
}