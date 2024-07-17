#include <iostream>
#include <vector>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> v;
    
    int n;
    cin >> n;
    while (n--) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    int x;
    cin >> x;
    int a, b;
    cin >> a >> b;
    
    v.erase(v.begin() + x - 1);
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    
    cout << v.size() << endl;
    
    for(auto val : v) {
        cout << val << " ";
    }
      
    return 0;
}