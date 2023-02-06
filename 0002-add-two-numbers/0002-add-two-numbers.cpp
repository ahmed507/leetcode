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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode();
        ListNode* head = l3;
        int rem = 0;
        while (l1 || l2) {
            int v = rem;
            if(l1)v+=l1->val;
            if(l2)v+=l2->val;
            rem = v / 10;
            l3->next = new ListNode(v % 10);
            l3 = l3->next;
            if (l1)l1 = l1->next; 
            if (l2)l2 = l2->next; 
        } 

        if (rem > 0)l3->next = new ListNode(rem); 
        return head->next;  											
    }
};