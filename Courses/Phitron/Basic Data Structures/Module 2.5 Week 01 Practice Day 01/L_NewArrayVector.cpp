#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);
  
  for(int i = 0; i < n; i++)
    cin >> a[i];
  
  for(int i = 0; i < n; i++)
    cin >> b[i];
  
  c = b;
  c.insert(c.begin() + n, a.begin(), a.end());
  
  for (int val : c)
    cout << val << " ";
    
  return 0;
}