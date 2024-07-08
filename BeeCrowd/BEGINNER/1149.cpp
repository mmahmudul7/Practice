#include <iostream>
using namespace std;

int main (){
  int a, n, sum = 0;
  cin >> a;
	do {
	  cin >> n;
	} while(n <= 0);

	for(int i = 0; i < n; i++)
		sum += a + i;

	cout << sum << endl;
	
	return 0;

}