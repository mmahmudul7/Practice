#include<stdio.h>
#include<limits.h>
int funMax(int a[], int n, int i){
  if (i == n) return INT_MIN;
  int mx = funMax(a, n, i + 1);
  if(a[i] > mx){
    return a[i];
  } else {
    return mx;
  }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
      scanf("%d", &a[i]);
    }
    printf("%d\n", funMax(a, n, 0));
    return 0;
}