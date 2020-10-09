/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL) {
            temp=temp->next;
            count++;
        }
        temp=head;
        for (int i=0;i<ceil(count/2);i++) {
            temp=temp->next;
        }
        return temp;
    }
};