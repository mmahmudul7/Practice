#include <bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    int jersey_no;
    char country[10];
};
int main() {
    Cricketer* dhoni = new Cricketer(7, "india");
    dhoni->jersey_no = 7;
    strcpy(dhoni->country, "India");

    Cricketer* kohli = new Cricketer;
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);

    delete dhoni;

    cout << kohli->jersey_no << endl;
    cout << kohli->country << endl;

    delete kohli;

    return 0;
}
