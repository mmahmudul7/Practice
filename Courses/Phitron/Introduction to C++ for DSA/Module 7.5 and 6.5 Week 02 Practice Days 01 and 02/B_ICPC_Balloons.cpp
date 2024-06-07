#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sum = 0;
        int freq[26] = {0};
        for (char c : s)
        {
            if (freq[c - 'A'] == 0)
            {
                sum += 2;
                freq[c - 'A']++;
            }
            else
            {
                sum += 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}