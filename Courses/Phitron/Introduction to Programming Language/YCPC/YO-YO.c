#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%d ", i * j + i * j);
        }
        printf("\n");        
    }
    
    return 0;
}