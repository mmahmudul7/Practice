#include<stdio.h>
void fun(int ary[], int size, int j){
    if (j == size) return;
    printf("%d\n", ary[j]);
    fun(ary, size, j+1);
}
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    fun(ar, n, 0);
    
    return 0;
}