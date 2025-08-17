#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string sentence;
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);
        map<string, int> mp;

        string mxWord;
        int cnt = 0;

        while (ss >> word){
            mp[word]++;
            if (mp[word] > cnt) {
                cnt = mp[word];
                mxWord = word;
            }
        }

        cout << mxWord << " " << cnt << endl;
    }

    return 0;
}