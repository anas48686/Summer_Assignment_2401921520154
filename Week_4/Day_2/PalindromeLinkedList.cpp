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
    ListNode* reverseList(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr){
            ListNode* front =curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* half=reverseList(slow);
        ListNode* halfHead=half;
        while(head && half){
            if(head->val != half->val) return false;
            head=head->next;
            half=half->next;
        }
        halfHead=reverseList(halfHead);
        slow->next=halfHead;
        return true;
    }
};