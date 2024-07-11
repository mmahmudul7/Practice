#include <bits/stdc++.h> 
class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Queue {
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return sz == 0;
    }

    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (tail == NULL)
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
        sz++;
    }

    int dequeue() {
        if (head == NULL) return -1;
        Node* deleteNode = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        int data = deleteNode->data;
        delete deleteNode;
        sz--;
        return data;
    }

    int front() {
        if (sz == 0) return -1;
        return head->data;
    }
};