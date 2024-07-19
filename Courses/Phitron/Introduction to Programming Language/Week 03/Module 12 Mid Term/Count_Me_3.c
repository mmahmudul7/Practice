/*You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.

Input Format
First line will contain T, the number of test cases.
Each test case will contain only S.

Constraints
1 <= T <= 1000
1 <= |S| <= 10000; Here |S| means the length of S.

Output Format
Output the count of capital alphabets first, then the count of small alphabets then the count of digits. Don't forget to put a new line after each test case.

Sample Input 0

2
theFox25IsBrave
ILoveYou100TimesAndSay2Also

3 10 2
7 16 4

*/
#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);

    char s[10001];

    for (int i = 0; i < t; i++){
        scanf("%s", s);
        int capital = 0, small = 0, digit = 0;
        
        for (int i = 0; i < strlen(s); i++){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                capital++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z'){
                small++;
            }
            else if (s[i] >= '0' && s[i] <= '9'){
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
        
    }
    
    return 0;
}