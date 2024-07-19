#include<stdio.h>
#include<limits.h>   // INT_MIN, INT_MAX এর জন্য এই হেডার ফাইলটি ইনক্লুড করা হচ্ছে
int main()
{
    int n;
    scanf("%d",&n);    // কতগুলো সংখ্যা থাকবে তা ইনপুট নিচ্ছি
    int a,max=INT_MIN;   // শুরুতে সবথেকে ছোট নাম্বার রেখে দিচ্ছি
    
    printf("%d",max);
    return 0;
}