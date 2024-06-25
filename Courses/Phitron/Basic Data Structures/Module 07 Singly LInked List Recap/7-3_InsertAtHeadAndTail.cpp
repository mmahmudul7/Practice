#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_linekd_list(Node *head)     // প্রিন্ট ফাংশন 
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int size(Node *head)                 // সাইজ ফাংশন 
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert(Node *head, int pos, int val)    // ইন্সারট ফাংশন
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_head(Node *&head, int val)      // ইন্সারট হেড ফাংশন 
{
    Node *newNode = new Node(val);  // শুরুতে নতুন নোড ডিক্লেয়ার করে নিব
    newNode->next = head;           // নতুন নোড এর শেষে পূর্বের হেড কে কানেক্ট করে দিব
    head = newNode;                 // হেড পয়েন্টারকে চেঞ্জ করে নতুন নোডে নিয়ে আসব।
}

// ইন্সারট টেল ফাংশন 
void insert_tail(Node *&head, Node *&tail, int val)    // হেড টেল দুটিই নিচ্ছি আমরা কারন হেড টেল দুটোর মানই চেঞ্জ হতে পারে।                                                        
{
    Node *newNode = new Node(val);      // শুরুতে নতুন নোড ডিক্লেয়ার করে নিচ্ছি। 
    if (head == NULL)                // চেক করছি হেড নাল কিনা। 
    {
        head = newNode;            // হেড নাল থাকা মানে আমার লিঙ্কড লিস্ট এখন ফাঁকা। 
        tail = newNode;            // তাই নতুন নোডটিই এখন হেড এবং এটিই বর্তমানে টেল। 
        return;                    // কাজ শেষ তাই রিটার্ন করা হচ্ছে। 
    }
    tail->next = newNode;          // আর যদি হেড নালে না থাকে তাহলে আমরা টেলের শেষে নতুন নোডকে কানেক্ট করে দিচ্ছি। 
    tail = newNode;                // তারপর টেল পয়েন্টার কে নতুন নোডে নিয়ে আসছি। 
}
int main()
{
    Node *head = new Node(10);       // নোড ডিক্লেয়ার 
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;                 // টেল সেট করা হচ্ছে। 
    head->next = a;                 // কানেকশন 
    a->next = b; 
    b->next = c;
    c->next = d;
    print_linekd_list(head);
    cout << "Tail-> " << tail->val << endl;

    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))         // যদি পজিশনটা সাইজ এর থেকে বেশি হয়ে যায় তাহলে বলে দিব এটি ইনভেলিড ইন্ডেক্স।
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)            // যদি পজিশন ০ হয় তাহলে হেডে ইন্সারট করব।
    {
        insert_head(head, val);
    }
    else if (pos == size(head))   // যদি পজিশন সাইজের সমান হয় তাহলে টেলে ইন্সারট করব।
    {
        insert_tail(head, tail, val);  
    }
    else                           // যদি পজিশন ভেলিড হয় তাহলে ইন্সারট এনি পজিশন ফাংশন কল করা হচ্ছে। 
    {
        insert(head, pos, val);
    }

    print_linekd_list(head);
    return 0;
}