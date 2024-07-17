/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void insert_at_tail(ListNode* &head, ListNode* &tail, int val) {
        ListNode* newNode = new ListNode(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        // tail = tail->next;
        tail = newNode;
    }

    void reverse(ListNode* &head, ListNode* cur) {
        if(cur->next == NULL) {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* cpyHead = NULL;
        ListNode* cpyTail = NULL;

        ListNode* tmp = head;
        while(tmp != NULL) {
            insert_at_tail(cpyHead, cpyTail, tmp->val);
            tmp = tmp->next;
        }

        reverse(cpyHead, cpyHead);

        tmp = head;
        ListNode* cpyTmp = cpyHead;
        while(tmp != NULL) {
            if(tmp->val != cpyTmp->val) {
                return false;
            }
            tmp = tmp->next;
            cpyTmp = cpyTmp->next;
        }
        return true;
    }
};