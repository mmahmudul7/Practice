#include <iostream>
using namespace std;

int main(){
	int a;
	
	while(cin >> a){
		if(a == 2002)
			cout << "Acesso Permitido" << endl;
		else
			cout << "Senha Invalida" << endl;
	}
	
	return 0;
}