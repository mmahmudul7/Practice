#include<stdio.h>
#include<string.h>
/*
void fun(char s[]){
    printf("%d ", strlen(s));
}
*/
void fun(char *s){
    printf("%d ", strlen(s));
}
int main(){
    char s[20] = "Hello";
    fun(s);    
    return 0;
}