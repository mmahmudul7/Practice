#include<stdio.h>
int x = 10;              // গ্লোবাল ভেরিয়েবল ডিক্লেয়ার করা হয়েছে। 
void func()
{
    printf("%d\n",x);    // কোন এরর আসবে না। x এর মান প্রিন্ট হবে।
}
int main()
{
    func();
    printf("%d\n",x);   // কোন এরর আসবে না। x এর মান প্রিন্ট হবে।
}