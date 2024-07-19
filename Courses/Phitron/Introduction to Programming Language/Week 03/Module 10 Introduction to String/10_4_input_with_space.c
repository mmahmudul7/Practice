#include<stdio.h>
#include<string.h>
int main(){
    char a[180];
    //gets(a);
    fgets(a, 100, stdin);
    printf("%s", a);
    
    return 0;
}