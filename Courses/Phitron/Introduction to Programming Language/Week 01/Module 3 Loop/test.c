#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int integer;
    long long int long_long_integer;
    float dosamik;
    char ch;
    
    scanf("%d", &integer);
    scanf("%lld", &long_long_integer);
    scanf("%f", &dosamik);
    scanf(" %c", &ch);
    
    printf("%d\n", integer);
    printf("%lld\n", long_long_integer);
    printf("%0.2f\n", dosamik);
    printf("%c", ch);
    
    return 0;
}
