#include<stdio.h>
/*
int sum(void){
    int x, y;
    scanf("%d %d", &x, &y);
    int add = x + y;
    return add;
}
*/
int sum(void){
    int x, y;
    scanf("%d %d", &x, &y);
    int add = x + y;
    return add;
}
int main(){
    int jogfol = sum();
    printf("%d\n", jogfol);
    return 0;
}