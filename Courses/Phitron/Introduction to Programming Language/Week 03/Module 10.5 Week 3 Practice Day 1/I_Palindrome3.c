#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s", &s);

    int len = strlen(s);
    
    if (s[0] == s[len-1] && s[1] == s[len-2] && s[2] == s[len-3]){
        printf("YES\n");
    } else {
        printf("NO\n");
    }   

    return 0;
}