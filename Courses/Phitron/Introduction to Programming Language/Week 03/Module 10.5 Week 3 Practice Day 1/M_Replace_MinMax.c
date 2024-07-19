#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);

        if(ar[i] > ar[max]){
            max = i;
        }
        if(ar[i] < ar[min]){
            min = i;
        }
    }
    
    int temp = ar[min];
    ar[min] = ar[max];
    ar[max] = temp;
    
    for(int i=0; i<n; i++){
         printf("%d ", ar[i]);
    }
    
    return 0;
}
