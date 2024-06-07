#include<stdio.h>
int main(){
    int n, k = 1, s;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 1; i <= 2 * n; i++){
        for (int j = 1; j<= s; j++){
            printf(" ");
        }
        for (int j = 1; j <= k; j++){
            printf("*");
        }
        printf("\n");
        if (i <= n - 1){
            s--;
            k = k + 2;
        } else if (i >= n + 1) {
            s++;
            k = k - 2;
        }
    }    
    return 0;
}