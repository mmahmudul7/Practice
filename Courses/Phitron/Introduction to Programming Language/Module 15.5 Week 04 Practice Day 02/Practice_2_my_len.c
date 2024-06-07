#include<stdio.h>
int my_len(char *ar){
    int count = 0;
    for (int i = 0; ar[i] != '\0'; i++){
        count++;
    }

    return count;
}
int main(){
    char s[100];
    scanf("%s", s);
    
    int amount = my_len(s);
    printf("%d\n", amount);
    return 0;
}