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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode *start = NULL,*temp,*prev;
        while(l1 && l2){
            
            temp = new ListNode();
            temp->val = (l1->val <= l2->val) ? l1->val : l2->val;
            temp->next = NULL;
            if(temp->val == l1->val)
                l1 = l1->next;
            else if(temp->val == l2->val)
                l2 = l2->next;
            if(start == NULL)
                start = temp;
            else prev->next = temp;
            prev = temp;
        }
        while(l1){
            temp = new ListNode();
            temp->val = l1->val;
            if(start == NULL)
                start = temp;
            else prev->next = temp;
            prev = temp;
            l1 = l1->next;
        }
        while(l2){
            temp = new ListNode();
            temp->val = l2->val;
            if(start == NULL)
                start = temp;
            else prev->next = temp;
            prev = temp;
            l2 = l2->next;
        }

        return start;
    }
};
