#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)      // কাস্টম কম্পেয়ার ফাংশন যা বুলিয়ান টাইপের এবং প্যারামিটার হিসেবে দুটি অবজেক্ট নিবে।
{
    if (a.marks <= b.marks)       // যদি প্রথম অবজেক্টের মার্ক্স ছোট অথবা সমান হয় তাহলে অর্ডার ঠিক আছে, এখানে সর্ট করার প্রয়োজন নেই। যেহেতু আমরা ছোট থেকে বড় সর্ট করছি।
        return true;              // এখানে সর্ট করার প্রয়োজন নেই, তাই ট্রু রিটার্ন করা হচ্ছে। 
    else                          // নাহলে সর্ট করতে হবে।
        return false;             // তাই ফলস রিটার্ন করা হচ্ছে।
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, cmp);        // সর্ট ফাংশনকে কল করে এরে এবং কম্পেয়ার ফাংশনকে দিয়ে দেওয়া হচ্ছে।
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}