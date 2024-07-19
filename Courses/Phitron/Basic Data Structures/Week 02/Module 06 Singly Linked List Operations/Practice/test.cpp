#include<bits/stdc++.h>
using namespace std;

class Node{ //10. Define Singly Linked List
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

int size(Node *head) { //2. Count the Size of the list
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_at_head(Node *&head, int val) { //4. Insertion at Head
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << endl << "Inserted at head" << endl;
}

void insert_at_tail(Node *&head, int val) { // 5. Insertion at Tail
    Node *newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

void insert_at_position(Node *head, int pos, int val) { // 6. Insertion at Specific Position
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++) {
        tmp = tmp->next;
        if (tmp == NULL) {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl; 
}

void delete_head(Node *&head) { //7. Deletion at Head
    if (head == NULL) {
        cout << endl
             << "Head is not available" << endl;
        return;
    }
    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
    cout << endl << "Deleted head" << endl;
}

void detete_at_tail(Node *&head) { //8. Deletion at Tail
    if (head == NULL)
        return;
    
    if (head->next == NULL) {
        delete head;
        return;
    }

    Node *tmp = head;
    Node *deleteTail = tmp->next->next;
    while (tmp->next->next != NULL) {
        tmp = tmp->next;
    }
    delete deleteTail;
    tmp->next = NULL;
    cout << endl << "Tail deleted" << endl;
}

void delete_at_postion (Node *&head, int pos) { // 9. Deletion at a Specific Position
    if (head == NULL)
        return;
    
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++) {
        tmp = tmp->next;
        if (tmp->next == NULL){
            cout << endl
                << "Invalid Index" << endl;
            return;
        }
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl << "Deleted position " << pos << endl;
}

void print(Node *head) { //3. Display List
    cout << endl << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main(){ // 1. Create a Singly Linked List (Take input from user)
    Node *head = NULL;
    
    while (true) {
        cout << endl << "Option 1: Insert node at tail" << endl;
        cout << "Option 2: Print Link List and Size" << endl;
        cout << "Option 3: Insert node at head" << endl;
        cout << "Option 4: Insert node at specific postion" << endl;
        cout << "Option 5: Delete head" << endl;
        cout << "Option 6: Delete tail" << endl;
        cout << "Option 7: Delete at postion" << endl;
        cout << "Option 8: Terminate the program" << endl;
        int op;
        cin >> op;
        if (op == 1){
            int val;
            cout << "Enter the tail element: ";
            cin >> val;
            insert_at_tail(head, val);
        } else if (op == 2) {
            print(head);
            cout << "Size is: " << size(head) << endl;
        } else if (op == 3) {
            int val;
            cout << "Enter the head value: ";
            cin >> val;
            insert_at_head(head, val);
        } else if (op == 4) {
            int val;
            int pos;
            cout << "Enter the postion: ";
            cin >> pos;
            cout << endl << "Enter the value of postion: ";
            cin >> val;
            insert_at_position(head, pos, val);
        } else if (op == 5) {
            delete_head(head);
        } else if (op == 6) {
            detete_at_tail(head);
        } else if (op == 7) {
            int pos;
            cout << "Enter the delete postion: ";
            cin >> pos;
            delete_at_postion (head, pos);
        } else if (op = 8) break;

        print(head);
    }
    
    return 0;
}