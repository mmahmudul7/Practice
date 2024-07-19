#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    //Student* a = new Student[n]; //Dynmic Array for Object.
    for (int i = 0; i < n; i++)
    {
        cin.ignore();     // প্রতিবার নাম ইনপুট নেওয়ার আগে cin.ignore() অথবা getchar() ব্যাবহার করত হবে। নাহলে পূর্বের লাইনের শেষে দেওয়া এন্টার টা নাম হিসেবে ইনপুট নিয়ে নিবে।
        getline(cin, a[i].name);    // getline ব্যাবহার করে স্পেস সহ নাম ইনপুট নেওয়া হচ্ছে।
        cin >> a[i].roll >> a[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}