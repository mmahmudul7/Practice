#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int sum = 0;
    cin >> x >> y;

    if (x > y)
    {
        int tmp = y;
        y = x;
        x = tmp;
    }

    for (int i = x; i <= y; i++)
    {
        if (i % 13 != 0)
            sum += i;
    }

    cout << sum << endl;

    return 0;
}