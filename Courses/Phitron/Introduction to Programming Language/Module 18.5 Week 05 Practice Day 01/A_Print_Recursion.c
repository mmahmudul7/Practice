#include<stdio.h>
void fun(int size){
    if (size == 0) return;
    printf("I love Recursion\n");
    fun(size - 1);
}
int main(){
    int n;
    scanf("%d", &n); 
    fun(n);    
    return 0;
}