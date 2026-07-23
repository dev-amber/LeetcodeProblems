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
        ListNode* dummy=new ListNode(0); // new dummy create
        dummy->next=head;
        ListNode* fast=dummy;
        ListNode* slow=dummy;

        for(int i=0;i<=n;i++){ //n=2 n+1 2+1 menas 3time loop run
            fast=fast->next;
        }

        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }

        ListNode* deleteNode=slow->next;
        slow->next=slow->next->next; // bcz we skip element that dlete it 
        
        delete deleteNode;
        return dummy -> next;



        
    }
};