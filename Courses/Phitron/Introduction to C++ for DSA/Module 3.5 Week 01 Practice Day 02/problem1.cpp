#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char name[100], int roll, char section, int math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    char rahimName[] = "rahim";
    char karimName[] = "karim";
    char ratulName[] = "ratul";

    Student rahim(rahimName, 9, 'A', 10, 8);
    Student karim(karimName, 9, 'B', 99, 8);
    Student ratul(ratulName, 9, 'C', 100, 8);

    Student h_math_marks = rahim;
    if (karim.math_marks > rahim.math_marks && karim.math_marks > ratul.math_marks)
        h_math_marks = karim;
    
    if (ratul.math_marks > rahim.math_marks && ratul.math_marks > karim.math_marks)
        h_math_marks = ratul;

    cout << h_math_marks.name << endl;

    return 0;
}
