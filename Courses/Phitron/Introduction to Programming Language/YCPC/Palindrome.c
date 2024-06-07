#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        char s1[n];
        scanf("%s", s1);
       // char s2[n] = s1[n];

        // for (int i = 0; i < n-1; i++){
        //     for (int j = i + 1; j < n; j++){
        //         if(s2[i] > s2[j]){
        //             int temp = s2[i];
        //             s2[i] = s2[j];
        //             s2[j] = temp;
        //         }
        //     }
        // }
        
        // int tk = 0;
        // int cmp = strcmp(s1, s2);
        
        // if(cmp == 0){
        //     printf("%d\n", cmp);
        // } else if (cmp < 0){
        //     for (int i = 0; i < n - 1; i++){
        //         if(s2[i] >= 'A' && s2[i] <= 'Z'){
        //             s2[0] = s2[0] + 34;
        //             tk = tk + 2;
        //         }
        //     }
        //     printf("%d\n", tk);
        // }

        printf("%s\n", s1);
        
    }
    
    return 0;
}