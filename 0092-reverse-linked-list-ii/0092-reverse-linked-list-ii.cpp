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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* leftptr = dummy;
        for(int i = 1; i < left; i++)
            leftptr = leftptr->next;

        ListNode* l=leftptr->next;

        ListNode* prev=nullptr;
        ListNode* curr=l;
        ListNode* next;

        for(int i=0;i<=right-left;i++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        leftptr->next=prev;
        l->next=curr;

        return dummy->next;//head
    }
};