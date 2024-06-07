#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n); //dori n = 5
    int ar[n]; /*jehetu input 5 ta hobe tay size 5*/

    for (int i = 0; i < n; i++){
        scanf("%d", &ar[i]); /* 10 20 30 40 50*/
    }
    
    int pos;
    scanf("%d", &pos);

    for (int i = pos; i < n-1; i++){ /*je element delete korbo se position theke loop chalabo suru 0 theke loop chalanor dorkar ney. "n-1 = index 3" porjoto swap korte hobe index 4 kar o sathe swap korbe na*/
        ar[i] = ar[i + 1]; /*je position theke loop start hobe se position a tar dan paser "i+1" er value niye asbo*/
    }

    for (int i = 0; i < n; i++){ /*n=5 input er index holo 4, akta element delele hole element hobe 4 ta r ses index hobe 3 tay "i < n - 1 = 3 hoi n er man"*/
        printf("%d ", ar[i]);
    }
    
    return 0;
}