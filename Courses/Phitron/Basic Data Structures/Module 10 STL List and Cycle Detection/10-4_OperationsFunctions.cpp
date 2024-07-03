#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList = {20, 40, 30, 10, 50, 10, 10};
    // myList.remove(10);// joto gulo 10 ache sob remove kore dibe
    myList.sort(); // sort in asending order
    myList.sort(greater<int>()); // sort in descending order
    
    myList.unique(); // unique value pete ba ai function use korte must be list sorted thaka lage, tay sorted list na thakle agee list ke sorted kore nite hobe

    myList.reverse();

    for(int val : myList)
        cout << val << " ";
    return 0;
}