```C++
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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head, *curr = head;
        int count = 0, secondCount = 0;
        while(temp != nullptr){
            count++;
            cout << count << endl;
            temp = temp -> next;
        }
        temp = head;
        while(temp != nullptr){
            secondCount++;
            cout << count << "    " << secondCount << endl;
            if(secondCount == int(count/2) + 1){
                head = temp;
                return head;
            }
            temp = temp -> next;
        }

        return head;
    }
};
```