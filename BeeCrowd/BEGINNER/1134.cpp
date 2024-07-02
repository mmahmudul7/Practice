#include <iostream>
using namespace std;

int main() {
  int alco = 0, gaso = 0, dis = 0;
  while(true){
    int n;
    cin >> n;
    if(n == 4){
      break;
    } else {
      if(n == 1){
        alco++;
      } else if( n == 2){
        gaso++;
      } else if(n == 3){
        dis++;
      }
    }
  }
  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " <<alco<< endl;
  cout << "Gasolina: " <<gaso<< endl;
  cout << "Diesel: " <<dis<< endl;
  
  return 0;
}