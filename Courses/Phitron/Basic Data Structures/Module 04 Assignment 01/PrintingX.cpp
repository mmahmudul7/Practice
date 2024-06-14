#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    for (int row = 0; row < n/2; row++){
        for (int col = 0; col < n/2; col++){
            if(row == col)
                cout << "\\";
            else
                cout << " ";
        }
        for (int col = n/2 + 1; col < n; col++){
            if(row + col == n - 1)
                cout << " /";
            else
                cout << " ";
        }
        cout << endl;        
    }

    for (int i = 0; i < n/2; i++)
        cout << " ";
    cout << "X" << endl;;

    for (int row = 0; row < n/2; row++){
        for (int col = n/2 + 1; col < n; col++){
            if(row + col == n - 1)
                cout << "/";
            else
                cout << " ";
        }
        for (int col = 0; col < n/2; col++){
            if(row == col)
                cout << " \\";
            else
                cout << " ";
        }
        cout << endl;        
    }
    
    return 0;
}