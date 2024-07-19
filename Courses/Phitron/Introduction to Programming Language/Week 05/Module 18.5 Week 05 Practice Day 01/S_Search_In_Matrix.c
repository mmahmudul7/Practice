#include<stdio.h>
int main(){
    int n, m, num;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &num);
    int flag = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(a[i][j] == num){
                flag = 1;
            }
        }
    }
    if (flag == 1){
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }
    return 0;
}