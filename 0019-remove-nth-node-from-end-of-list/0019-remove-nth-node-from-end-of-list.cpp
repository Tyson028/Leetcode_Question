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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;

        int size=0;
        while(temp != nullptr){
            temp=temp->next;
            size++;
        }

        if(n == size) return head->next;

        ListNode* curr=head;
        int itr=1;
        while(itr < size-n){
            curr=curr->next;
            itr++;
        }

        curr->next=curr->next->next;
        return head;
    }
};