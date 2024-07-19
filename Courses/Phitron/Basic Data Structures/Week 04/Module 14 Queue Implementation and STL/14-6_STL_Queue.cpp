#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;

        q.push(x);
    }
    
    cout << endl << q.size() <<endl;

    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}