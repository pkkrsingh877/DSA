# Javascript Solution

```Javascript
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
var deleteMiddle = function(head) {
    // Find length of Linked List
    let length = 0;
    let temp = head;
    while(temp){
        length++;
        temp = temp.next;
    }
    
    if(length == 1){
        head = null;
        return head;
    }

    // Calculate which is the middle node
    let index = parseInt(length / 2);

    // Traverse and get to middle node
    temp = head;
    let pre = temp;
    while(index){
        pre = temp;
        temp = temp.next;
        index--;
    }
    pre.next = temp.next;
    temp = null;
    return head;
};
```