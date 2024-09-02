#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v;

    while (e--) {
        int a, b;
        cin >> a >> b;
        // v.push_back(make_pair(a, b));
        v.push_back({a, b});
    }

    /* Print way 1 */
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }

    /* Print way 2 */
    for (pair<int, int> val : v) {
        cout << val.first << " " << val.second << endl;
    }    

    /* Print way 3 */
    // for (auto val : v) {
    //     cout << val.first << " " << val.second << endl;
    // }    
    
    return 0;
}