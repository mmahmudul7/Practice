#include <iostream>
using namespace std;

int main(){
    int n;
    int max = 0;
    int pos = 0;
    
    for(int i = 1; i <= 100; i++){
      cin >> n;
      
      if(n > max){
        max = n;
        pos = i;
      }
    }
    
    cout << max << endl << pos << endl;
    
    
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}