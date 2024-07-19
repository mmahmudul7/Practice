#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        char uppercase = ch - 32;
        printf("%c", uppercase);
    }
    else{
        char lowercase = ch + 32;
        printf("%c", lowercase);
    }
    return 0;
}