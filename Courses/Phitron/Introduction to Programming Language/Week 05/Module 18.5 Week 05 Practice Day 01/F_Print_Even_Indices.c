#include<stdio.h>
int func(int a[], int i){
    if (i == -1 ) return 0;
    if (i % 2 == 0) {
        printf("%d ", a[i]);
    }
    func(a, i - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    // for (int i = n - 1; i >= 0; i--){
    //     if (i % 2 == 0) {
    //         printf("%d ", a[i]);
    //     }
    // }
    
    func(a, n - 1);
    
    return 0;
}