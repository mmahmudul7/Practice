#include<bits/stdc++.h>
using namespace std;
vector<int> func(vector<int> a, int n){
    vector<int> runningSum(n);
    runningSum[0] = a[0];
    for (int i = 1; i < n; i++){
        runningSum[i] = a[i] + runningSum[i - 1];
    }
    
    return runningSum;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    
    vector<int> result = func(nums, n);

    for (int i = 0; i < n; i++)
        cout << result[i] << " ";    
    
    return 0;
}