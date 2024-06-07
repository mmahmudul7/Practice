void func(int *p){
    printf("x er address: %p\n", p);
    printf("Main er x er value: %d\n", *p);
    *p = 50;
}
int main(){
    int x = 10;
    printf("x er address: %p\n", &x);
    
    func(&x);
    printf("Main er x er value: %d\n", x);
    return 0;
}