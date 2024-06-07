#include<stdio.h>
int fun(char s[], int i){
    if (s[i] == '\0') return 0;
    if (s[i] >= 'A' && s[i] <= 'Z'){
        s[i] = s[i] + 32;
    }

    if (s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i'){
        return fun(s, i + 1) + 1;
    } else {
        return fun(s, i + 1);
    }
}
int main(){
    char s[201];
    fgets(s, 201, stdin);
    printf("%d\n", fun(s, 0));    
    return 0;
}