void func(int x){
    x = 200;
}
int main(){
    int x = 10;
    printf("x er address: %p\n", &x);
    
    func(x);
    printf("Main er x er value: %d\n", x);
    return 0;
}