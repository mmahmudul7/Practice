/*Write a C++ program that returns the sum of that elements right side values.First it take input of number of element then a vector*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> rightSideSums(vector<int>& nums) {
    int n = nums.size();
    vector<int> sums(n, 0);

    for (int i = n - 2; i >= 0; --i) {
        sums[i] = sums[i + 1] + nums[i + 1];
    }

    return sums;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> result = rightSideSums(nums);

    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}