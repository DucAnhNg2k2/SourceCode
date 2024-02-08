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
        string s = "";
        while(head != nullptr) {
        	s += head->val;
        	head = head->next;
		}
		for(int i = 0, j = s.length() - 1; i < j; i++, j--) {
			if(s[i] != s[j]) return false;
		}
		return true;
    }
};
