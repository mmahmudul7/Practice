#include <stdio.h>

int main() {
    int tk;
    scanf("%d", &tk);

    if(tk > 1000){
        printf("I will buy Punjabi\n");
        int newTk = tk - 1000;

        if(newTk >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }
    else{
        printf("Bad luck!");
    }       
    return 0;
}