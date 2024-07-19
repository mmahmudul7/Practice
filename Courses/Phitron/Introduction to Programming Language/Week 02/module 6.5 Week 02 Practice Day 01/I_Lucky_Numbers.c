#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int first_num, sec_num;
    if(n==10 || n==20 || n==30 || n==40 || n==50 || n==60 || n==70 || n==80 || n==90){
        printf("YES\n");
    }else{
        first_num = n / 10;
        sec_num = n % 10;
        
        if(first_num % sec_num == 0 || sec_num % first_num == 0){
            printf("YES\n");
        }    
        else{
            printf("NO\n");
        }
    }
    return 0;
}