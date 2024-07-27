```C++
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> addresses;
        ListNode *temp = head;
        while(temp != NULL){
            if(addresses.find(temp) != addresses.end()){
                return true;
            }
            addresses.insert(temp);
            temp = temp -> next;
        }
        return false;
    }
};
```