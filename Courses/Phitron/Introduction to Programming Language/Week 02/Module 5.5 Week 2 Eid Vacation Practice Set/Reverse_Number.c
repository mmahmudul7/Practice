#include <stdio.h>
int main()
{
    int n; //1234
    scanf("%d", &n);
    
    int first_number = n / 1000; // 1
    int remainder1 = n % 1000; // 234
    int second_number = remainder1 / 100; // 234 / 100 = 2
    int remainder2 = remainder1 % 100; // 34
    int third_number = remainder2 / 10; // 34 / 10 = 3
    int forth_number = remainder2 % 10; // 34 % 10 = 4
    
    printf("%d%d%d%d", forth_number, third_number, second_number, first_number);
    
    return 0;    
}