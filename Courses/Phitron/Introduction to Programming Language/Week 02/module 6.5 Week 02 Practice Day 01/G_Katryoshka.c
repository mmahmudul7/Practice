/* https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
Two eyes and one body.
Two eyes, one mouth, and one body.
One eye, one mouth, and one body.
*/
#include<stdio.h>
int main(){
    long long int eyes, mouth, body; /*90 24 89*/
    scanf("%lld %lld %lld", &eyes, &mouth, &body);
    long long int minDoll = 0;

    if(eyes < mouth && eyes < body){ /*to apply "One eye, one mouth, and one body"*/
        minDoll = eyes; /*90*/
    } else if (mouth < eyes && mouth < body) {
        minDoll = mouth; /*24*/
    } else if (body < eyes && body < mouth) {
        minDoll = body; /*89*/
    }
    /*1st time minDoll 24 ta hobe ai input anusare, 24 ta mouth ses hoyegese tay akon amara "Two eyes and one body" condition diye next combination gula banabo*/
    long long int newEyes = (eyes - minDoll) / 2; /*2 ta eyes diye akta banano jabe tay 2 diye vag kore nilam, (90-24) = 66, 66/2 = 33*/
    long long int newMouth = mouth - minDoll; 
    long long int newBody = body - minDoll; /*24 ta body ses hoise 1st combination er jonno, akon baki thake 89 - 24 = 65*/

    if (newEyes <= newBody) { /*akhane eyes kom thakle*/
        printf("%lld\n", newEyes + minDoll); /* 33 + 24 = 57*/
    } else if (newBody < newEyes) { /*body kom thakle*/
        printf("%lld\n", newBody + minDoll); 
    }

    return 0;
}