#include <bits/stdc++.h>
using namespace std;

// Freq নামের একটি ক্লাস ডিক্লেয়ার করা হয়েছে, যেখানে প্রতিটি অক্ষরের মান এবং গণনা রাখা হবে।
class Freq{
public:
    char value; // অক্ষর (character)
    int count;  // ঐ অক্ষরের সংখ্যা (frequency)
};

// cmp নামের একটি ফাংশন ডিক্লেয়ার করা হয়েছে যা দুটি Freq অবজেক্টের তুলনা করবে।
bool cmp(Freq a, Freq b){
    if (a.count == b.count)
        return a.value < b.value; // যদি count সমান হয়, তবে অক্ষর অনুযায়ী ক্রমানুসারে সাজাবে।
    else
        return a.count > b.count; // অন্যথায়, বেশি সংখ্যার অক্ষর আগে আসবে।
}

int main(){
    string s;
    cin >> s; // স্ট্রিং ইনপুট নেওয়া হচ্ছে।

    Freq f[26]; // ২৬টি Freq অবজেক্টের একটি অ্যারে তৈরি করা হয়েছে, a থেকে z পর্যন্ত।

    for (int i = 0; i < 26; i++){
        f[i].value = char(i + 'a'); // প্রতিটি ইন্ডেক্সে অক্ষর বসানো হয়েছে।
        f[i].count = 0;             // প্রতিটি ইন্ডেক্সে count 0 দিয়ে ইনিশিয়ালাইজ করা হয়েছে।
    }

    for (char c : s){
        int ascii = int(c - 'a'); // অক্ষরের ASCII মান থেকে 'a' এর ASCII মান বাদ দিয়ে ইন্ডেক্স নির্ণয় করা হয়েছে।
        f[ascii].count += 1;      // সেই ইন্ডেক্সে count 1 বাড়ানো হয়েছে।
    }

    sort(f, f + 26, cmp); // cmp ফাংশন ব্যবহার করে f অ্যারেকে সাজানো হয়েছে।

    for (int i = 0; i < 26; i++){
        for (int j = 0; j < f[i].count; j++){
            cout << f[i].value; // প্রতিটি অক্ষর তার ফ্রিকোয়েন্সি অনুযায়ী প্রিন্ট করা হয়েছে।
        }
    }
    return 0;
}
