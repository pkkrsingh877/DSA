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
    bool isPalindrome(ListNode* head) {
        stack <int> reverse;
        bool itIsPalindrome = true;

        ListNode* temp = head;
        while(temp != nullptr){
            reverse.push(temp -> val);
            temp = temp -> next;
        }

        temp = head;
        while(temp != nullptr){
            if(reverse.top() == temp -> val){
                reverse.pop();
                temp = temp -> next;
            }else{
                itIsPalindrome = false;
                return itIsPalindrome;
            }
        }
        return true;
    }
};
```