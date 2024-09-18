#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList = {10, 20, 30, 40, 50};

    cout << myList.front() << endl; // head
    cout << myList.back() << endl; // tail

    int index = 3 ;
    auto iterator_of_index = *next(myList.begin(),index) ;
    cout << iterator_of_index << endl ; // Access the ith (3rd) element

    //cout << *next(myList.begin(), 3); 

    return 0;
}