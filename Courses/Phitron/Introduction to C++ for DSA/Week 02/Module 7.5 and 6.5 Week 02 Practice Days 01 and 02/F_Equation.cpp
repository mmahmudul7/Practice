#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int n, m;
  cin >> n >> m;
  
  long long int sum = 0;
  for (int i = 2; i < m; i = i + 2){
    int result = pow(n * 1.0, i * 1.0);
    sum = sum + result;
  }
  
  cout << sum << endl;
  
  return 0;
}