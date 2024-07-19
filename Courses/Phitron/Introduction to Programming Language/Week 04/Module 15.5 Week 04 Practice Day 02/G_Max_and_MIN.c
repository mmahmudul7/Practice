#include<stdio.h>
#include<limits.h>
void min_max(int x, int y){
    printf("%d %d\n", x, y);
}
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++){
        scanf("%d", &ar[i]);

        if (ar[i] < min){
            min = ar[i];
        }
        if (ar[i] > max){
            max = ar[i];
        }
    }
    
    min_max(min, max);

    return 0;
}