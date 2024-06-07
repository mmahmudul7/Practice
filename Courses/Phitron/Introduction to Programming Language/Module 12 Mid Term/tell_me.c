#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++){
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int x;
        scanf("%d", &x);

        int ans = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == x){
                ans = 1;
            }
        }

        if ( ans == 1){
            printf("YES\n"); 
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}