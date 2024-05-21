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
    ListNode* reverseList(ListNode* head) {
        stack<int> linkedStack;
        ListNode *temp = head;
        ListNode *reversedHead = nullptr;
        while(temp != nullptr){
            linkedStack.push(temp -> val);
            temp = temp -> next;
        }
        temp = nullptr;
        while(!linkedStack.empty()){
            int data = linkedStack.top();
            linkedStack.pop();
            ListNode *newNode = new ListNode(data);

            if(reversedHead == nullptr){
                reversedHead = newNode;
                temp = newNode;
                newNode -> next = nullptr;
            }else{
                temp -> next = newNode;
                newNode -> next = nullptr;
                temp = newNode;
            }
        }
        return reversedHead;
    }
};
```