#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, sum = 0;
        cin >> x >> y;

        if (x > y)
        {
            int tmp = x;
            x = y;
            y = tmp;
        }

        for (int i = x + 1; i < y; i++)
            if (i % 2 == 1)
                sum += i;
        cout << sum << endl;
    }

    return 0;
}