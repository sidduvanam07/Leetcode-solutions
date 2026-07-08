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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* a = headA;
        ListNode* b = headB;

        int lenA = 0, lenB = 0;
        // int lenB = 0;

        while(a != NULL){
            lenA++;
            a = a->next;
        }
         while(b != NULL){
            lenB++;
            b = b->next;
        }

        a = headA;
        b = headB;
        while(lenA > lenB){
            a = a->next;
            lenA--;
        }
        while(lenB > lenA){
            b = b->next;
            lenB--;
        }

        while(a != b){
            a = a->next;
            b = b->next;
        }

        return a;




    }
};