/*Write a C++ program to initialize a vector from an array of integers and print the elements. The array is: {10, 20, 30, 40, 50}.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> numbers(arr, arr + size);

    for (int i = 0; i < numbers.size(); ++i)
        cout << numbers[i] << " ";
    
    return 0;
}