#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b, c;
        long long int m;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int x = m % (a * b * c);
        if (x == 0){
            printf("%lld\n", m / (a * b * c));
        } else if (x != 0) {
            printf("-1\n");
        } else {
            printf("0\n");
        }
    }    
    
    return 0;
}