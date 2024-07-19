#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char ar[n+1];
    long long int sum = 0;

    for (int i = 0; i < n; i++){
        scanf(" %c", &ar[i]);
        int digit = ar[i] - '0';
        sum = sum + digit;
    }

    printf("%d\n", sum);
    
    return 0;
}