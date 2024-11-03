# JavaScript Solution
```JavaScript

/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
    // Find length of Linked List
    let length = 0;
    let temp = head;
    while(temp){
        length++;
        temp = temp.next;
    }
    
    // Calculate which is the middle node
    let index = parseInt(length / 2);

    // Traverse and get to middle node
    temp = head;
    while(index){
        temp = temp.next;
        index--;
    }
    head = temp;
    return head;
};
```
# C++ Solution
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