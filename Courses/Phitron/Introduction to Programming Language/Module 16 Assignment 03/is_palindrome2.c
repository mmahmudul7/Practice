#include <stdio.h>
#include <string.h>
int is_palindrome(char *s){
    int size = strlen(s);
    int lastIndexOfs = size - 1;
    int ans = 1;

    for (int i = 0; i < size; i++){
        if (s[i] != s[lastIndexOfs - i]){
            ans = 0;
            break;
        }
    }
    
    return ans;
}

int main(){
    char s[1001];
    scanf("%s", s);

    int value = is_palindrome(s);

    if (value == 1){
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}