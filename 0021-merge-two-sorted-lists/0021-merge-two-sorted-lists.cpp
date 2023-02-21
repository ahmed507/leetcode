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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = new ListNode();
        ListNode* head = list3;
        int v1,v2,m;
        while (list1 || list2) {
            if(list1){
                v1 = list1->val;
            }
            else v1=101;
            if(list2){
                v2 = list2->val;
            }
            else v2=101;
            m = min(v1,v2);
            list3->next = new ListNode(m);
            list3 = list3->next;
            if(list1 && m==list1->val){
                list1 = list1->next;
            } 
            else if(list2 && m==list2->val){
                list2 = list2->next;
            } 
        } 

        return head->next;  											
    }
};