#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll; // দিস কি-ওয়ার্ড দিয়ে ক্লাস ভেরিয়েবল roll এর মধ্যে কন্সট্রাক্টর ভেরিয়েবল roll কে রেখে দেওয়া হচ্ছে।
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student rahim(29, 9, 5.);
    Student karim(45, 10, 4.33);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}