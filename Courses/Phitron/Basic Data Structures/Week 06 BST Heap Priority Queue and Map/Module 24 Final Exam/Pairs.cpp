#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, vector<int>> mp;
    
    while (n--){
        string s;
        int x;
        cin >> s >> x;
        mp[s].push_back(x);
    }
    
    vector<pair<string, int>> pr;
    for (auto it : mp){
        vector<int> v = it.second;
        
        sort(v.begin(), v.end(), greater<int>()); 
        
        for (int num : v)
            pr.push_back({it.first, num});
    }
    
    for (auto p : pr)
        cout << p.first << " " << p.second << endl;

    return 0;
}