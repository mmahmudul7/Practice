#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char m, s;
    cin >> a >> m >> b >> s >> c;

    bool isCorrect = false;

    switch (m)
    {
    case '+':
        if (a + b == c)
            cout << "Yes" << endl;
        else
            cout << a + b;
        break;
    case '-':
        if (a - b == c)
            cout << "Yes" << endl;
        else
            cout << a - b;
        break;
    case '*':
        if (a * b == c)
            cout << "Yes";
        else
            cout << a * b;
        break;
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char m, s;
    cin >> a >> m >> b >> s >> c;

    if (a + b == c)
    {
        if (m == '+')
            cout << "Yes\n";
    }
    else if (a - b == c)
    {
        if (m == '-')
            cout << "Yes\n";
    }
    else if (m == '*'){
        if (a != 0 || b !=0){
            cout << a * b;
        } else
            cout << "Yes";
    }

    return 0;
}
*/