#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;         
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(a, a + n);
    sort(a, a + n, greater<int>());     //  সর্ট ফাংশনের মধ্যে স্টারটিং পয়েন্টার হিসেবে এরের প্রথম ইন্ডেক্স এবং এন্ডিং পয়েন্টার হিসেবে এরের সাইজ দিয়ে দেওয়া হচ্ছে। বড় থেকে ছোট অর্ডারে সর্ট করতে চাই তাই greater ফাংশনকে কল করা হয়েছে তার মধ্যে এরের ডাটা টাইপ int দিয়ে দেওয়া হয়েছে। 
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}