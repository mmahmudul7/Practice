/*input:
13
5 0 1 4 0 2 3 4 6 5 0 2 3
*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int cnt[7] = {0};
    for (int i = 0; i < n; i++){
        /* cnt[a[i]]++; */
        int val = a[i];
        cnt[val]++;
    }

    for (int i = 0; i <=6; i++){
        printf("%d - %d\n", i, cnt[i]);
    }    
    return 0;
}