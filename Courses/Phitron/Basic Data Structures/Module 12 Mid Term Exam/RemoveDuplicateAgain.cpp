/*You need to solve this using STL List, otherwise you will not get marks.*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList;
    int val;

    while (true) {
        cin >> val;
        if(val == -1)
            break;
        else
            myList.push_back(val);
    }

    myList.sort();
    myList.unique();

    for (int element : myList) {
        cout << element << " ";
    }

    return 0;
}