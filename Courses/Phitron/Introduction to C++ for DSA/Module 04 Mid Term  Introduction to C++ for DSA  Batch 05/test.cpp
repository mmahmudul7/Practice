#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ar[n];
    cin >> ar;
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = ar[i] - 'a';
        count[val]++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        int val = i - 'a';
        for (int j = 1; j <= count[val]; j++)
        {
            cout << i;
        }
    }
    return 0;
}