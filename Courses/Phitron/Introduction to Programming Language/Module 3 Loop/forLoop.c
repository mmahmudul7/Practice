#include<stdio.h>
int main(){
    int sum = 0;
    int number;
    scanf("%d", &number);
    for (int i = 1; i <= number; i++){
        if(i%2 == 0){
            printf(" Even %d\n", i);
        }
        else 
        {
            printf("%d - Odd\n", i);
        }
        sum = sum + i;
    }

    printf("total %d", sum);
    

    return 0;
}