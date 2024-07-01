#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *prev;
    int val;
    Node *next;

    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
    // tail = newNode;
}

void print_head_to(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_tail_to(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL; // head initialize করা হচ্ছে।
    Node *tail = NULL; // tail initialize করা হচ্ছে।
    int val;
    while (true) // একটা infinity while loop চালানো হচ্ছে।
    {
        cin >> val; // একটা value input নেয়া হচ্ছে।
        if (val == -1)
        {          // check করা হচ্ছে value টা -1 কিনা।
            break; // value -1 হলে loop break করা হচ্ছে।
        }
        insert_tail(head, tail, val); // যেহেতু আমরা generally একটার পর একটা value insert করি তাই insert_tail function call করা হচ্ছে।
    }

    print_head_to(head); // এখানে left to right print করা হচ্ছে।
    print_tail_to(tail); // এখানে right to left print করা হচ্ছে
    return 0;
}
