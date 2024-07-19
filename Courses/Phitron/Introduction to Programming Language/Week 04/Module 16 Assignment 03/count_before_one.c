#include<stdio.h>
int count_before_one(int *ary, int size){
    int count = 0;

    for (int i = 0; i < size; i++){
        if (ary[i] == 1){
            break;
        }
        count++;
    }

    return count;
}
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    int amount = count_before_one(ar, n);
    printf("%d\n", amount);
    
    return 0;
}