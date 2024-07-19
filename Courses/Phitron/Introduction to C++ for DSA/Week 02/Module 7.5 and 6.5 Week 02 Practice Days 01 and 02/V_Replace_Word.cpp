#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s, x = "EGYPT";
    cin >> s;

    while (s.find(x) != (-1))
    {
        s.replace(s.find(x), x.size(), " ");
    }

    cout << s << endl;

    return 0;
}