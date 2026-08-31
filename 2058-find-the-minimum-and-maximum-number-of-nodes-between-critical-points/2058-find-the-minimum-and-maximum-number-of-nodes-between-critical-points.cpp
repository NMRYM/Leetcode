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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }

        ListNode* temp = head->next;
        ListNode* prev = head;
        int first =-1, pre =-1, curr =1, mini =INT_MAX;

        while(temp && temp->next){
            if((temp->val > temp->next->val && temp->val > prev->val)|| (temp->val < temp->next->val && temp->val < prev->val) ){
                if(first == -1) first = curr;
                else mini = min(mini,curr - pre);

                pre = curr;
            }

            
            prev= temp;
            temp=temp->next;
            curr++;
        }

        if(first ==-1 || pre ==first){
            return {-1,-1};
        }

        return {mini,pre - first};
    }
};