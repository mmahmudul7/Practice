#include<stdio.h>
int main(){
    int n, s, k = 1, line;
    scanf("%d", &n);
    line = 5;
    for (int i = 0; i < n; i = i + 2){
        line++;
    }
    s = line - 1;

    for (int i = 1; i <= line; i++){
        for (int j = 1; j <= s; j++){
            printf(" ");
        }
        for (int j = 1; j <= k; j++){
            printf("*");
        }
        printf("\n");
        s--;
        k = k + 2;
    }
    
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            printf(" ");
        }
        for (int j = 1; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }   
    
    return 0;
}