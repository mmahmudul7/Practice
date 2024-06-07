#include<stdio.h> 
#include<string.h> 
int main(){
    int s[1001];
    scanf("%s", &s);

    int len = strlen(s);
    int i = 0, j = len-1;
    while (i < j){
        int temp;
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }    

    for (int i = 0; i < len; i++){
        printf("%c ", s[i]);
    }
    
    return 0;
}