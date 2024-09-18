/*You must use STL List, otherwise you will not get marks.*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    list<int> myList;
    
    while (q--){
        int x, v;
        cin >> x >> v;
        
        if (x == 0)
            myList.push_front(v);
        else if (x == 1)
            myList.push_back(v);
        else if (x == 2){
            if (v >= 0 && v < myList.size()){
                auto it = myList.begin();
                while(v--)
                    it++;
                myList.erase(it);
            }
        }
        
        cout << "L -> ";
        for (auto it = myList.begin(); it != myList.end(); it++)
            cout << *it << " ";
        cout << endl;
        
        cout << "R -> ";
        if (!myList.empty()){
            for (auto it = --myList.end(); ; it--){
                cout << *it << " ";
                if (it == myList.begin())
                    break;
            }
        }
        cout << endl;
    }
    
    return 0;
}