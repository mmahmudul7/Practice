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
            return myList.size(); // O(n) complexity for number of n values.
        }
        bool empty(){
            if(myList.size() == 0) return true;
            else return false;
        }
};

int main(){
    myStack st;
    int n;
    cin >> n;

    while (n--){
        int x;
        cin >> x;

        st.push(x);
    }

    while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}