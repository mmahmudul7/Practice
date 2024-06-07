#include<stdio.h>
int main(){
    int x = 10;
    int *ptr = &x;

    printf("x er memory address - %p\n", &x);
    printf("ptr er value - %p\n", ptr);
    printf("ptr er address - %p\n", &ptr);
    printf("ptr er memory size - %d\n", sizeof(ptr));

    x = 200;
    printf("ptr er value - %d\n", x);
    printf("ptr er value - %d\n", *ptr);

    *ptr = 300;
    printf("ptr er value - %d\n", x);
    printf("ptr er value - %d\n", *ptr);
    
    return 0;
}