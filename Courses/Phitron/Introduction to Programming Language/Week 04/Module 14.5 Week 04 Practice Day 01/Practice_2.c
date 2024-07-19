#include<stdio.h>
int main(){
    int n, s = 0;
    scanf("%d", &n);
    int k = (2 * n) - 1;
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= s; j++){
            printf(" ");
        }
        for (int j = 1; j <= k; j++){
            printf("*");
        }
        printf("\n");
        s++;
        k = k - 2;
    }
    
    return 0;
}