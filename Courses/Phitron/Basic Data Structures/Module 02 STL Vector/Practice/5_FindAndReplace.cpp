#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    
    for(int i = 0; i < n; ++i)
        cin >> vec[i];

    int old_val, new_val, find_val;
    cin >> old_val >> new_val;
    cin >> find_val;

    replace(vec.begin(), vec.end(), old_val, new_val);

    for(int i = 0; i < n; ++i) 
        cout << vec[i] << " ";
    
    cout << endl;

    int index = -1;
    for (int i = 0; i < n; ++i) {
        if (vec[i] == find_val) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << index << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
