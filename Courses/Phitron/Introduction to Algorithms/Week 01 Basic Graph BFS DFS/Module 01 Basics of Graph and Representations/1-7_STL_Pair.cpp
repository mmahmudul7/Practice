#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int, int> p1;
    pair<int, string> p2(2, "Algorithm");
    pair<int, string> p3;
    p3 = {5, "tree"};
    p1 = make_pair(10, 20);
    
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;
    return 0;
}