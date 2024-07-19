#include<stdio.h>
int char_to_ascii(char ch){
    int value = ch;
    return value;
}

int main(){
    char c;
    scanf("%c", &c);

    int re_val = char_to_ascii(c);
    printf("%d", re_val);    
    return 0;
}