#include<bits/stdc++.h>
using namespace std;
class myQueue{
    public:
        list<int> l;
        void push(int val){ // insert at tail
            l.push_back(val);
        }
        void pop(){ // delete from head
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
    myQueue q;
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;

        q.push(x);
    }
    cout << endl;
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}