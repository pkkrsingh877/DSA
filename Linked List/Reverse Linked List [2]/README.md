```C++
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head != nullptr){

            ListNode* previous = nullptr;
            ListNode* current = head;
            ListNode* forward = current -> next;

            while(current -> next != nullptr){
                current -> next = previous;
                previous = current;
                current = forward;
                if(forward -> next != nullptr){
                    forward = forward -> next;
                }
            }
            current -> next = previous;

            return current;
        }
        return head;
    }
};
```