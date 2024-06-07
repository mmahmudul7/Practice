/*You will be given two positive integer N and K. You need to print from 1 to K, and you need to do this N times. Please look at the sample input output.
input Input will contain N and K.
3 5
output:
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 

1 <= N,K <= 100

You need to print fron 1 to K, N times. Don't forget to print new line after printing from 1 to K.
*/

#include<stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++){
        
        for (int i = 1; i <= k; i++){
            printf("%d ", i);
        }

        printf("\n");
    }
       
    return 0;
}