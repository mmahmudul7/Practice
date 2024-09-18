#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList;
    /*
    list<int> list5 = {1, 2, 3, 4, 5};
    list<int> myList(list5);
    */
    /*
    list<int> myList(10, 5);
    cout << myList.size();
    */
    /*
    int a[5] = {10, 20, 30, 40, 50};
    list<int> myList(a, a + 5);
    */
    vector<int> v = {100, 200, 300};
    list<int> myList(v.begin(), v.end());

    // for finding pointer we use for loop
    /*
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    } */

    //    for only value we can use foreach loop
    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}