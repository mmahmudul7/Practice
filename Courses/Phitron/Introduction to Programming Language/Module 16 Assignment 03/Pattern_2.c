#include<stdio.h>
int main(){
    int n, s, k = 1;
    scanf("%d", &n);
    s = n - 1;

    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= s; j++){
            printf(" ");
        }
        for(int j = k; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
        s--;
        k++;
    }
    
    return 0;
}