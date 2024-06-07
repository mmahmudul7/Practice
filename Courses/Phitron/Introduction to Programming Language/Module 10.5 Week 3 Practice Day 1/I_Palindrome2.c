#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s", &s);

    int len = strlen(s);

    for (int i = 0; ; i++){
        if (s[i] == s[len-(i+1)] && s[i+1] == s[len-(i+2)] && s[i+2] == s[len-(i+3)]){
            printf("YES\n");
            break;
        } else {
            printf("NO\n");
            break;
        }
    }

    return 0;
}