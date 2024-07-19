#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  getline(cin, s);
  bool inside_word = false;
  int count = 0;
  
  for(char c:s){
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){ // isalpha(c) = (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
      if(inside_word == false){
        count++;
      }
      inside_word = true;
    } else {
      inside_word = false;
    }
  }
  
  cout << count;
    return 0;
}