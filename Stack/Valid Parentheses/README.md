```C++
class Solution {
public:
    bool isValid(string s) {
        std::stack<char> parantheses;
        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                parantheses.push(c);
            }else{
                // if the first character is closing bracket then return false
                if(parantheses.empty()){
                    return false;
                }
                char top_parantheses = parantheses.top();
                parantheses.pop();
                if((c == ')' && top_parantheses != '(') ||
                    (c == ']' && top_parantheses != '[') ||
                    (c == '}' && top_parantheses != '{')){
                        return false;
                }
            }
        }
        return parantheses.empty();
    }
};
```