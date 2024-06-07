#include<stdio.h>
long long int func(int a[], int size, int i){
    if (i == size ) return 0;
    long long int sum = 0;
    sum =  sum + a[i];
    return sum + func(a, size, i + 1);
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("%lld\n", func(a, n, 0));
    
    return 0;
}