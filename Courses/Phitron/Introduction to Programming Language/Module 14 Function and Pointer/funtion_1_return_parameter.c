#include<stdio.h>

int sum(int x, int y){
    int sum = x + y;
    return sum;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", sum(a, b));    
    return 0;
}