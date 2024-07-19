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
{ // Nodes
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;
    // connections
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    // print
    print_head_to(head);
    print_tail_to(tail);

    return 0;
}