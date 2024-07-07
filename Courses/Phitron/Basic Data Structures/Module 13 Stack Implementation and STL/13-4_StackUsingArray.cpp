#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }
        int size(){
            return v.size(); // O(n) complexity for number of n values.
        }
        bool empty(){
            if(v.size() == 0) return true;
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
    
    /*
    st.push(10);
    st.push(20);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    if(!st.empty())
        cout << st.top() << endl;
    */
    
    return 0;
}