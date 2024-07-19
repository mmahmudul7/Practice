#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    scanf("%s %s", a, b);

    int v = strcmp(a, b);
    //printf("%d", v);

    if(v < 0){ /*০ এর থেকে ছোটঃ প্রথম স্ট্রিংটি ছোট।*/
        printf("A is smaller!\n");
    }
    else if (v > 0){ /*০ এর থেকে বড়ঃ দ্বিতীয় স্ট্রিংটি ছোট*/
        printf("B is smaller!\n");
    } else { /*0 hole দুটি স্ট্রিং ই সমান। */
        printf("Same!\n");
    }
    
    return 0;
}