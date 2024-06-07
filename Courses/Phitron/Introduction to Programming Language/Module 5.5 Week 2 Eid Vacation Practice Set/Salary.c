#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    
    double yearly = 365 * 1.0 * x;
    
    printf("%0.0lf\n", yearly);
    return 0;
}