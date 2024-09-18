#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
        list<int> myList;

        void push(int val){
            myList.push_back(val);
        }
        void pop(){
            myList.pop_back();
        }
        int top(){
            return myList.back();
        }
        int size(){
            return myList.size();
        }
        bool empty(){
            if(myList.size() == 0) return true;
            else return false;
        }
};

class myQ{
    public:
        list<int> l;
        
        void push(int val){
            l.push_back(val);
        }
        void pop(){
            l.pop_front();
        }
        int front(){
            return l.front();
        }
        int size(){
            return l.size();
        }
        bool empty(){
            return l.empty();
        }
};

int main(){
    myStack a;
    myQ b;
    int n, m;
    cin >> n >> m;
    while (n--) {
        int x;
        cin >> x;
        a.push(x);
    }
    while (m--) {
        int x;
        cin >> x;
        b.push(x);
    }
    
    if(a.size() != b.size())
        cout << "NO";
    else {
        bool flag = true;
        while (!a.empty()) {
            if(a.top() != b.front()) {
                flag = false;
                break;
            }
            a.pop();
            b.pop();
        }
        if(flag)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}