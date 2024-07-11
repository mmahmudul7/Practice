/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack {
public:
    Node *head = NULL;
    int sz = 0;

    Stack(){
        //Write your code here
    }

    int getSize() {
        return sz;
    }

    bool isEmpty() {
        if (sz == 0) return true;
        else return false;
    }

    void push(int data) {
        sz++;
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (sz == 0) return;
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int getTop() {
        if (sz == 0) return -1;
        else return head->data;
    }
};