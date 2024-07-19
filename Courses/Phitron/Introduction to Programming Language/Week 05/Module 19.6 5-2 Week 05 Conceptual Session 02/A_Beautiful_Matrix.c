#include<stdio.h>
#include<stdlib.h>
int main(){
    int row = 5, col = 5;
    int a[row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int ans = 0;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(a[i][j] == 1){
                ans = abs(i - 2) + abs(j - 2);
                break;
            }
        }
    }
    printf("%d\n", ans);
    
    return 0;
}