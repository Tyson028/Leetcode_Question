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
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return true;
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* curr;
        if(fast == nullptr)// Even length
            curr = slow;
        else// Odd length - skip middle
            curr = slow->next;
    
        ListNode* prev=nullptr;
        ListNode* next;
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        ListNode* head2=prev;
        while(head2!=nullptr){
            if(head->val != head2->val)
                return false;

            head=head->next;
            head2=head2->next;
        }
        return true;
    }
};