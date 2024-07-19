#include<stdio.h>
int main(){
    int number1, number2;
    scanf("%d %d", &number1, &number2);

    int sum = number1 + number2;
    int sub = number1 - number2;
    int mul = number1 * number2;
    float div = number1 * 1.0 / number2;

    printf("%d + %d = %d\n", number1, number2, sum);
    printf("%d - %d = %d\n", number1, number2, sub);
    printf("%d * %d = %d\n", number1, number2, mul);
    printf("%d / %d = %0.2f", number1, number2, div);
    return 0;
}