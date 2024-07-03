#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;
    for (int i = 0; i < n * 4;){
        cout << (i + 1) << " " << (i + 2) << " " << (i + 3) << " PUM" << endl;
        i += 4;
    }
    return 0;
}