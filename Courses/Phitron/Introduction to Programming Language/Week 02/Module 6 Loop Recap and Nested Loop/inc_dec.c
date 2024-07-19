#include<stdio.h>
int main(){
    int i, x;
    i = 10;
    //x = i++;
    //x = ++i;
    //x = i--;
    x = --i;

    printf("i = %d\nx = %d", i, x);
    return 0;
}