#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<int> V(N);

    for (int i = 0; i < N; i++) // O(N) 
    {
        cin >> V[i];
    }

    
    vector<long long int> prefix_sum(N) ;

    prefix_sum[0] = V[0] ; // প্রিফিক্স সাম এরে এর প্রথম ভ্যালুটি হবে এরে এর প্রথম ভ্যালুটি
 
    for(int i =1 ;i<N ;i++){
        prefix_sum[i] = prefix_sum[i-1]+V[i] ;
    }

    for (int i = 1; i <= N; i++) // O(Q) 
    {

        int L = 1, R = N;
        L++;   //R--; // converting the position to array index

        int SUM = 0;

        // for (int j = L; j <= R; j++) // O(N) -> কারণ আমাদের প্রত্যেকবার L এর মান ১ এবং R এর মান N পর্যন্ত দেয়া হতে পারে  
        // {

        //     SUM += V[j];
        // } // এই লুপটি বাদ দিয়ে এখন আমরা প্রিফিক্স সাম টেকনিক  ব্যবহার করবো 

        SUM = prefix_sum[R]-prefix_sum[L-1] ; // O(1) 

        cout << SUM << endl;
    }
}