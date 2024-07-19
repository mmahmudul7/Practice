#include <stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    long long int sum = 0;
    
    for(i = 1; i <= n; i++){
        sum = sum + i;
    }
    
    printf("%lld", sum);
    return 0;
}