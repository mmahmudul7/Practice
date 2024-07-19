#include<stdio.h>
#include<string.h>
int main(){
    char a[200], b[200]; /*a er size besi nilam karon a te b er elements gula ase ses a add hobe*/
    scanf("%s %s", a, b);
    strcat(a, b);
    printf("%s", a); 
    
    return 0;
}