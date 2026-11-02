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
        vector<int> temp;

        ListNode* curr=head;
        while(curr!=nullptr){
            temp.push_back(curr->val);
            curr=curr->next;
        }

        set<int> st(temp.begin(),temp.end());
        ListNode* dummynode=new ListNode(0);

        curr=dummynode;
        for(auto it : st) {
            curr->next = new ListNode(it);
            curr = curr->next;
        }
        return dummynode->next;
    }
};