#include<stdio.h>
char capital_to_small(char ch){
    // ch = ch + 32;
    return ch + 32;
}

int main(){
    char c;
    scanf("%c", &c);

    int re_val = capital_to_small(c);
    printf("%c", re_val);    
    return 0;
}