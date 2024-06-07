#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    long long int r = a % b;
    
    if (b == 0) {
        printf("-1\n");
    } else if (r >= 0 ){
        printf("%lld\n", r);
    }
    
    return 0;
}