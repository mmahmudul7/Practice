#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    int min = 0, max = 0;
    for(int i= 0; i < n; i++){
      scanf("%d", &ar[i]);
      
      if(ar[i] > ar[max]){
        max = i;
      }
      if(ar[i] < ar[min]){
        min = i;
      }
    }
    int temp = ar[max];
    ar[max] = ar[min];
    ar[min] = temp;
    
    for(int i = 0; i < n; i++){
      printf("%d ", ar[i]);
    }
    return 0;
}