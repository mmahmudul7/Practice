#include<stdio.h>
int my_abs(int x){
    if(x < 0){
        x = x * (-1);
    }
    return x;
}
int main(){
    int n;
    scanf("%d", &n);
    int number = my_abs(n);
    printf("%d\n", number);
    return 0;
}