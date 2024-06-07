#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n+1];

    for (int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    int pos, val;
    scanf("%d%d", &pos, &val);

    for (int i = n; i >= pos; i--){
        ar[i] = ar[i-1];
    }

    ar[pos-1] = val; /* joto number position a bolbo toto number postion element insert hobe*/

    for (int i = 0; i <= n; i++){
        printf("%d ", ar[i]);
    }
    
    
    
    return 0;
}