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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0) return head;
        
        ListNode* curr=head;
        int size=1;
        while(curr->next!=nullptr){
            size++;
            curr=curr->next;
        }
        k=k%size;
        if(k==0) return head;

        curr->next=head;

        ListNode* newcurr=head;
        for(int i=0;i<size-k-1;i++)
            newcurr=newcurr->next;

        ListNode* newhead=newcurr->next;
        newcurr->next=nullptr;

        return newhead;
    }
};