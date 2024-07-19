#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    char s[100001];
    while(cin.getline(s,100001)){
      int lenS = strlen(s);
      
      sort(s, s + lenS);
      for (int i = 0; i < lenS; i++){
        if(s[i] == ' ') continue;
        else cout << s[i];
      }
      cout<<endl;
    }
    
    return 0;
}
