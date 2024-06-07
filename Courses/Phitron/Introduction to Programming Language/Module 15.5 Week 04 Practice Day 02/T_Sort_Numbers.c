#include<stdio.h>
void printArray(int a, int b, int c){
    printf("%d\n%d\n%d", a, b, c);
}
int main(){
    int a[3];
    
    for (int i = 0; i < 3; i++){
        scanf("%d", &a[i]);
    }
    int x = a[0];
    int y = a[1];
    int z = a[2];

    for (int i = 0; i < 2; i++){
        for (int j = i + 1; j < 3; j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }        
    }
    
    for (int i = 0; i < 3; i++){
        printf("%d\n", a[i]);
    }
    printf("\n");

    printArray(x, y, z);

    return 0;
}