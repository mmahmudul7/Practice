#include<bits/stdc++.h>
using namespace std;

class myPair{
    public:
        int first, second;
        void make_pair(int a, int b) {
            first = a;
            second = b;
        }
};

int main(){
    myPair p;
    p.make_pair(10 , 20);
    cout << p.first << " " << p.second;
    
    return 0;
}