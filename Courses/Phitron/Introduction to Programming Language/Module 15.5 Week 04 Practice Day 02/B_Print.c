#include<stdio.h>
void numbers(int n){
    for (int i = 1; i <= n-1; i++){
        printf("%d ", i);
    }
    printf("%d", n);
}

int main(){
    int n;
    scanf("%d", &n);
    numbers(n);  
    return 0;
}