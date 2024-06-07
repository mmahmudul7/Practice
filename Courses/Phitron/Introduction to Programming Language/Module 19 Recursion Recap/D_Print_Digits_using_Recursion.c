#include<stdio.h>
void fun(int n) {
    if(n == 0) return;
    fun(n/10);
    printf("%d ", n % 10);
}
int main(){
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++){
        int n;
        scanf("%d", &n);
        fun(n);
        if (n == 0){
            printf("0");
        }
        printf("\n");
    }
    
    return 0;
}