#include <bits/stdc++.h>
using namespace std;
class Student           // স্টুডেন্ট এর নাম, রোল এবং মার্ক্স নিয়ে একটি ক্লাস ডিক্লেয়ার করা হয়েছে।
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;                
    cin >> n;              // এরে সাইজ ইনপুট নেওয়া হচ্ছে। 
    Student a[n];          // সেই সাইজের এরে ডিক্লেয়ার করা হচ্ছে যার ডাটা টাইপ হচ্ছে Student। কারন আমরা Student ক্লাসের অবজেক্টের এরে তৈরি করছি।
    for (int i = 0; i < n; i++)         // লুপ চালিয়ে প্রতিটি অবজেক্টের জন্য নাম, রোল এবং মার্ক্স ইনপুট নেওয়া হচ্ছে। 
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    for (int i = 0; i < n; i++)        // লুপ চালিয়ে প্রতিটি অবজেক্টের নাম, রোল এবং মার্ক্স প্রিন্ট করা হচ্ছে।
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}