#include<stdio.h>
int main(){
    int n; 
    scanf("%d", &n); /* jodi n = 5 dori*/
    int ar[n + 1]; /*1 ti Element insert hobe tay array size "n + 1" holo*/ 
    
    for (int i = 0; i < n; i++){ // loop i < n porjonto cholbe karon ata input array
        scanf("%d", &ar[i]); // dori given elements are 10 20 30 40 50
    }

    int pos, val; /*dori pos = 1 and value = 100*/
    scanf("%d %d", &pos, &val);

    for (int i = n; i >= pos + 1; i--){ // n + 1 array te ses gore element swap korar condition tay i = n theke suru korsi 
        ar[i] = ar[i - 1]; /* 4 number index theke 5 number index a existing element swap korsi */
    }

    ar[pos] = val; /*pos = 1 hole, 1 number index a given 100 value set koredilam*/
    /*akon just arrary print kore dibo*/
    for (int i = 0; i <=n ; i++){ /*jehetu arry size n + 1 tay "i < n + 1" condition jeta ke "i <= n" ai vabew likha jay*/ 
        printf("%d ", ar[i]);
    }
    
    return 0;
}