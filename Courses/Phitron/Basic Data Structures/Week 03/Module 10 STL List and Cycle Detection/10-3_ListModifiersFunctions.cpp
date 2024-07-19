#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    list<int> myList = {10, 30, 20, 30, 40, 30};
    list<int> newList = {11, 22, 33};
    vector<int> v = {60, 70, 80};

    /* list<int> newList;
    // newList = myList;
    // newList.assign(myList.begin(), myList.end());
    */

    /*
    myList.push_back(100); // insert_at_tail()
    myList.push_front(100); // insert_at_head()
    myList.pop_back(); // delete_at_tail()
    myList.pop_front(); // delete_at_head()
    */

    /*
    myList.insert(next(myList.begin(), 2), 100); // 2 number position a 100 insert koro
    myList.insert(next(myList.begin(), 1), {100, 200, 300});
    myList.insert(next(myList.begin(), 1), newList.begin(), newList.end());
    myList.insert(next(myList.begin(), 0), v.begin(), v.end()); // insert from vector
    // array o insert kora jay
    myList.erase(next(myList.begin(), 7));
    myList.erase(next(myList.begin(), 1), next(myList.begin(), 4)); // multiple value detele in range wise
    */

    /*
    replace(myList.begin(), myList.end(), 30 , 100); // joto gulo 30 ache sob gulo ke 100 diye replace koro

    for (int val : myList){
        cout << val << " ";
    }
    */

   auto it = find(myList.begin(), myList.end(), 20);
//    cout << *it << endl; // iterator pointer moto kaj kore, tay amara direferencing kore value dekte pari
    if(it == myList.end()){ // value khuje na pele myList.end() a na pawa value store kore
        cout << "Not Found!" ;
    } else {
        cout << "Found.";
    }


    return 0;
}