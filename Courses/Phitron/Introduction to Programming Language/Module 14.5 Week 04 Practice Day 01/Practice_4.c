#include<stdio.h>
char small_to_capital(char ch){
    // ch = ch - 32;
    return ch - 32;
}

int main(){
    char c;
    scanf("%c", &c);

    int re_val = small_to_capital(c);
    printf("%c", re_val);    
    return 0;
}