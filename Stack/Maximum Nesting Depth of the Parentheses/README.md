# Maximum Nesting Depth of the Parentheses

This is the algorithm that I used to solve the problem.

- First of all, we create a stack called parentheses.
- Initialize count variable with 0 and max variable with INT_MIN
- For each character in string s
    - If character is equal to '('
        - Then push it to parentheses
        - Increment count variable by 1
    - Else if character is equal to ')'
        - Then pop '(' from top of the stack
        - If max is less than count
            - Then max = count
        - Decrement count variable by 1
- If max == INT_MIN 
    - Then return 0 
- return max

```C++
class Solution {
public:
    int maxDepth(string s) {
        stack <char> parentheses;
        int count = 0, max = INT_MIN;
        for(char c : s){
            if(c == '('){
                parentheses.push(c);
                count++;
            }else if(c == ')'){
                parentheses.pop();
                if(max < count){
                    max = count;
                }
                count--;
            }
        }
        if(max == INT_MIN){ 
            // In case no parentheses is given as input max == INT_MIN
            return 0;
        }
        return max;
    }
};
```