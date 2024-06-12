#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i < 10000; i++){
        if(i%n == 2)
            cout << i << "\n";
    }
    
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}