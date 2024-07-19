#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        
        int pa = 0, ti = 0;
        for(int j = 0; j < n; j++){
          if(s[j] == 'P') {
            pa++;
          } else {
            ti++;
          }
        }
        
        if(pa == ti) {
          printf("Draw\n");
        } else if (pa > ti) {
          printf("Pathaan\n");
        } else {
          printf("Tiger\n");
        }
    }
    
    return 0;
}