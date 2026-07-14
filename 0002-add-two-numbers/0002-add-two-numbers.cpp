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
        
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;

        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
    
        int  bal = 0;


        while(ptr1 || ptr2 || bal > 0){
            int val1 = (ptr1 != nullptr) ? ptr1->val : 0;
            int val2 = (ptr2 != nullptr) ? ptr2->val : 0;
            int sumVal = val1 + val2 + bal;

            bal = sumVal / 10;
            int digitValue = sumVal % 10;
            
            current->next = new ListNode(digitValue);
            current = current->next;

            if (ptr1 != nullptr) ptr1 = ptr1->next;
            if (ptr2 != nullptr) ptr2 = ptr2->next;
        
        }

        ListNode* result = dummyHead->next;
        delete dummyHead; 
        return result;
    }
};