#include<stdio.h>
#include<string.h>
int main(){
    char a[200], b[200]; /*a er size besi nilam karon a te b er elements gula ase ses a add hobe*/
    scanf("%s %s", a, b);

    int k = strlen(a);
    for (int i = 0; i <=strlen(b); i++){ /*<= nilam karon amara Null '\0' o copy korbo */
        a[k] = b[i];
        k++;
    }

    printf("%s", a); 
    
    return 0;
}