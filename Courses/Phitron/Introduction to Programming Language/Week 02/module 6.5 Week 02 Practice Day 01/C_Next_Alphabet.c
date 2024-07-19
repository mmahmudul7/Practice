#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);

    if(ch >= 'a' && ch < 'z'){
        ch = ch + 1;
        printf("%c\n", ch);
    }else if(ch == 'z'){
        ch = 'a';
        printf("%c\n", ch);
    }
    return 0;
}