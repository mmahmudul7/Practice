#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};
int main(){
    int n;
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; i++){
        cin >> st[i].name >> st[i].roll >> st[i].marks;
    }
    
    int i = 0, j = n - 1;
    while (i < j){
        swap(st[i], st[j]);
        i++;
        j--;
    }
    


    for (int i = 0; i < n; i++){
        cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    }
    
    return 0;
}