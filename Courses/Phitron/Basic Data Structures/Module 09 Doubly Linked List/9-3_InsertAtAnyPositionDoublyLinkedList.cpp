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
void inset_at_position(Node *head, int pos, int val)
{ // dori input 2, 100
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next; // 100 -> 30
    tmp->next = newNode;       // 20 -> 100

    newNode->next->prev = newNode; // 100 <- 30
    newNode->prev = tmp;           // 20 <- 100
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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
{ // Nodes
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;
    // connections
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    // print
    cout << "Enter pos and val ";
    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "Invalid" << endl;
    }
    else
    {
        inset_at_position(head, pos, val);
    }
    print_head_to(head);
    print_tail_to(tail);

    return 0;
}