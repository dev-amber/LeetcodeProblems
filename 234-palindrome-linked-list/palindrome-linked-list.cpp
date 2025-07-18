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
        if (!head->next)
            return true;
        // find mid
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // reverse second half
        ListNode *pre = NULL, *temp = NULL, *cur = slow;
        while (cur) {
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }

        // compare
        ListNode* first = head;
        ListNode* sec = pre;
        while (sec) {
            if (first->val != sec->val)
                return false;
            first = first->next;
            sec = sec->next;
        }
        return true;
    }
};