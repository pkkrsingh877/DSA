```C++
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
        if (headA == NULL || headB == NULL) {
            return NULL;
        }

        ListNode* pAc = headA;
        ListNode* pBc = headB;

        while (pAc != pBc) {
            pAc = (pAc == NULL) ? headB : pAc->next;
            pBc = (pBc == NULL) ? headA : pBc->next;
        }

        return pAc;
    }
};
```