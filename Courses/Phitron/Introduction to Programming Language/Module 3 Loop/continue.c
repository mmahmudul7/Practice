#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    for (int i = 0; i < 10; i++)    {
        
        if(i == 5){
            continue;
        }
        printf("%d\n", i);
    }
    
    
    return 0;
}
