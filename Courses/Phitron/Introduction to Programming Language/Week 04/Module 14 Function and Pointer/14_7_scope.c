#include<stdio.h>
void func(void){
    int s = 100;
    printf("func er s er address: %p\n", &s);
}
int main(){
    int s = 200;
    printf("Main er s er address: %p\n", &s);
    func();    
    return 0;
}