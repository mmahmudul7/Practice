#include <stdio.h>
 
int main() {
    int x, p;
    scanf("%d %d", &x, &p);
    
    float orginal = (p * 1.0 * 100) / (100 - x);
    
    printf("%0.2f\n", orginal);
 
    return 0;
}