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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head;
        unordered_map<int,int> freq;

        while(curr!=nullptr){
            freq[curr->val]++;
            curr=curr->next;
        }

        ListNode* dummy=new ListNode(0);
        ListNode* curr1=dummy;

        curr=head;
        while(curr!=nullptr){
            if(freq[curr->val]==1){
                curr1->next=new ListNode(curr->val);
                curr1=curr1->next;
            }
            curr=curr->next;
        }

        return dummy->next;

    }
};