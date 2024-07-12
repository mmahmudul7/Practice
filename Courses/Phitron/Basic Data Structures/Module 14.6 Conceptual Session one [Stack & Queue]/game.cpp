#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    queue<int> q;
    void findTheWinner(int n, int k) {
        for(int i = 1; i <= n; i++) 
            q.push(i);

        cout << "### Given players are: ";
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

        for(int i = 1; i <= n; i++) 
            q.push(i);
        cout << endl << endl;

        int cnt = 0;
        while(q.size() > 1){
            int val = q.front();
            q.pop();
            cnt++;

            if(cnt == k){
                cout << "-> " << val << " is removed!" << endl << 
                "And getting " << q.size() + 1 << " number position" << endl << endl;
                cnt = 0;
            } else
                q.push(val);            
        }
        cout << "*** The " << q.size() << "st & winner is: " << q.front() << endl; ;                
    }
};

int main() {
    Solution solution;
    int n , k;
    cout << endl << "Enter total amount of players number: ";
    cin >> n;
    cout << "Enter the a random value: ";
    cin >> k;
    
    solution.findTheWinner(n, k);

    cout << endl << "Press Enter key to exit...";
    cin.ignore();
    cin.get();

    return 0;
}