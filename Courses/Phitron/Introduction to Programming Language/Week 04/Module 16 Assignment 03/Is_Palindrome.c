#include <stdio.h>
#include <string.h>
int is_palindrome(char *s){
    int size = strlen(s);
    int lastIndexOfs = size - 1;
    char s2[1001];

    for (int i = 0; i < size; i++){
        s2[i] = s[lastIndexOfs - i];
        s2[lastIndexOfs+1] = '\0';
    }

    int value = strcmp(s, s2);
    
    return value;
}

int main(){
    char s[1001];
    scanf("%s", s);

    int value = is_palindrome(s);
    //printf("%d\n", value);
    if (value == 0){
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}