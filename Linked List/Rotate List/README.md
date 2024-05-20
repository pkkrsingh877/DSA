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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* temp = head;
        ListNode* prev = head;
        int count = 0, timesToRotate;

        while(temp != nullptr){
            count++;
            temp = temp -> next;
        }

        if(count != 0){
            timesToRotate = k % count;
        }else{
            return head;
        }

        for(int i = 0; i < timesToRotate; i++){
            temp = head;
            prev = head;
            while(temp != nullptr){
                if(temp -> next == nullptr){
                    temp -> next = head;
                    prev -> next = nullptr;
                    head = temp;
                    break;
                }
                prev = temp;
                temp = temp -> next;
            }
        }
        return head;
    }
};
```