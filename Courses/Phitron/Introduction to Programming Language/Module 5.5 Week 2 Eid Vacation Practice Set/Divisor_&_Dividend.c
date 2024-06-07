#include<stdio.h>
int main(){
    int d, q, r;
    scanf("%d %d %d", &d, &q, &r);

    int temp = d - r;
    int divisor = temp / q;

    printf("%d\n", divisor);
    return 0;
}