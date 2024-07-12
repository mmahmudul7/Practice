#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node *prev;
    string address;
    Node *next;
    Node(string address) {
        this->prev = NULL;
        this->address = address;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string address) {
    Node *newNode = new Node(address);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

Node *find_node(Node *head, string address) {
    Node *temp = head;
    while (temp != NULL) {
        if (temp->address == address) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void handle_visit(Node *&current, Node *head, string address) {
    Node *foundNode = find_node(head, address);
    if (foundNode) {
        current = foundNode;
        cout << current->address << endl;
    } else
        cout << "Not Available" << endl;
}

void handle_next(Node *&current) {
    if (current->next) {
        current = current->next;
        cout << current->address << endl;
    } else
        cout << "Not Available" << endl;
}

void handle_prev(Node *&current) {
    if (current->prev) {
        current = current->prev;
        cout << current->address << endl;
    } else
        cout << "Not Available" << endl;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    string address;

    while (cin >> address && address != "end") {
        insert_at_tail(head, tail, address);
    }

    Node *current = head;
    int q;
    cin >> q;
    cin.ignore();

    while (q--) {
        string command;
        getline(cin, command);

        stringstream ss(command);
        string cmd, addr;

        ss >> cmd;
        if (cmd == "visit") {
            ss >> addr;
            handle_visit(current, head, addr);
        } else if (cmd == "next")
            handle_next(current);
        else if (cmd == "prev")
            handle_prev(current);
    }

    return 0;
}