#include<stdio.h>
void fun(char *s){
    s[0] = 'G';
}
int main(){
    char s[] = "Hello";
    fun(s);
    
    printf("%s\n", s);
    return 0;
}