#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30};
    cout << "Original list size is: " << myList.size() << endl;
    cout << "Maximum List size is: " << myList.max_size() << endl;
    cout << "Print the original list: " << endl;
    for (int val : myList)
    {
        cout << val << " ";
    }

    // myList.clear();
    myList.resize(2);
    myList.resize(5, 100);
    cout << endl
         << endl
         << "Print the resized list: " << endl;
    for (int val : myList)
    {
        cout << val << " ";
    }

    myList.clear();
    cout << endl
         << endl;
    if (myList.empty())
    {
        cout << "Your list is Empty!";
    }
    else
    {
        cout << "Your list is not Empty.";
    }
    return 0;
}