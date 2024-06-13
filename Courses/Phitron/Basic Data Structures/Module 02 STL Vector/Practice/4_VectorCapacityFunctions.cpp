/*Write a C++ program that demonstrates the use of various vector capacity-related member functions. Your program should perform the following steps:*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    /*1. Initialize a Vector:
    ○ Initialize a vector with integers from 1 to 10.*/
    //vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v;
    for (int i = 1; i <= 10; i++){
        v.push_back(i);
    }

    /*2. Print Initial Vector Properties:
    ○ Print the size, capacity, and maximum size of the vector.*/
    cout << endl;
    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl;
    cout << "Maximum Size = " << v.max_size() << endl;

    /*3. Resize the Vector:
    ○ Resize the vector to hold 20 elements, initializing new elements with the value 0.
    ○ Print the size and capacity after resizing.*/
    cout << endl;
    v.resize(20, 0);
    cout << "Capacity After Resize = " << v.capacity() << endl;
    cout << "After Resize Maximum Size = " << v.max_size() << endl;

    /*4. Clear the Vector:
    ○ Clear the vector elements using the clear() function.
    ○ Print the size and capacity after clearing.*/
    cout << endl;
    v.clear();
    cout << "Capacity After Clear = " << v.capacity() << endl;
    cout << "After Clear Maximum Size = " << v.max_size() << endl;

    /*5. Check if the Vector is Empty:
    ○ Check if the vector is empty using the empty() function and print the result.*/
    cout << endl;
    cout << (v.empty() == 1 ? "Empty? Yes" : "Empty? No")<< endl;

    /*6. Resize to Original Size:
    ○ Resize the vector back to its original size (10) and fill with the value 100.
    ○ Print the size, capacity, and elements of the vector after resizing.*/
    cout << endl;
    v.resize(10, 100);
    cout << "New Size = " << v.size() << endl;
    cout << "New Capacity = " << v.capacity() << endl;
    cout << "New Vector elements are : " << endl;
    
    for (int i = 0; i < v.size(); i++){
        cout << i+1 << " " << v[i] << endl;
    }
    /*
    for(int val : v)
        cout << val << " ";
    */

    return 0;
}