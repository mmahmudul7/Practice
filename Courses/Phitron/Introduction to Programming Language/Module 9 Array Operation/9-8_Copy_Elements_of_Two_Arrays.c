#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int m; /*b array er size*/
    scanf("%d", &m);
    int b[m]; /*b array*/
    for (int i = 0; i < m; i++){ /*b array er element input*/
        scanf("%d", &b[i]);
    }

    int ans[n+m]; /*answer array and size declare*/
    for (int i = 0; i < n; i++){
        ans[i] = a[i]; /* answer array te a array er element placing*/
    }

    int i = n;
    for (int j = 0; j < m; j++){
        ans[i] = b[j]; /* answer array te a array er emements er por b array er elements placing*/
        i++;
    }

    for (int i = 0; i < m + n; i++){
        printf("%d ", ans[i]);
    }
    
    return 0;
}