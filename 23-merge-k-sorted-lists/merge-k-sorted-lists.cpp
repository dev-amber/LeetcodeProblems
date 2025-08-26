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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      vector <int> nodes;  // new array merger all val
      for(ListNode* lst:lists){
        // list traverse  // array ki formma 
        while(lst){
            nodes.push_back(lst->val);
            lst=lst->next;
        }
      }
      // array sort
      sort(nodes.begin(), nodes.end());

      ListNode* res=new ListNode(0);  // starting point
      ListNode* curr=res;
      for(int node:nodes){
        curr->next=new ListNode(node);
     curr=curr->next;
      }
      return res->next;

    }
};