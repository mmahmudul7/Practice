#include<stdio.h>
#include<string.h>
int main(){
    char s[100001];
    scanf("%s", &s);

    int len = strlen(s);

    for (int i = 0; i < len; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        } else if (s[i] == ','){
            s[i] = ' ';
        }        
        printf("%c", s[i]);
    }   
    return 0;
}