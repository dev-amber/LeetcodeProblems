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
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
   // first create new ans array and put val
   ListNode* ans=new ListNode();
   ListNode* cur=ans;

  // check cond  in both anone have null
    while(list1 && list2){
        if(list1->val > list2->val){
            cur->next = list2;   
            list2 = list2->next;  // in this check smaller grater val ofboth
        }
        else{
            cur->next = list1;   
            list1 = list1->next; 
        }
        cur = cur->next; // move 'cur' forward in merged list
    }

    //in this if anone have large vakl not size equal
    cur->next = list1 ? list1 : list2;

    return ans->next;
}
};