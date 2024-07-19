/*
If both a and b  are divisible by k , both of them win and you should print "Both".
If a is divisible by k  but b  isn't, Memo wins and you should print "Memo".
If b is divisible by k  but a  isn't, Momo wins and you should print "Momo".
If both a and b are not divisible by k, no one wins and you should print "No One".
*/
#include<stdio.h>
int main(){
    long long int a ,b , k;
    scanf("%lld %lld %lld", &a, &b, &k);

    if(a%k == 0 && b%k == 0){
        printf("Both\n");
    } else if(a%k == 0 && b%k != 0){
        printf("Memo\n");
    } else if(a%k != 0 && b%k == 0){
        printf("Momo\n");
    } else {
        printf("No One\n");
    }
    
    return 0;
}