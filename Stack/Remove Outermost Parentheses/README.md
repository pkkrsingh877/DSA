```C++
class Solution {
public:
    string removeOuterParentheses(string s) {
        
        stack <char> parentheses;
        string result = "", formationString = "";
        
        for(int i = 0; i < s.length(); i++){
            
            if(s[i] == '('){
                parentheses.push(s[i]);
                formationString += s[i];
            }else{
                parentheses.pop();
                formationString += s[i];
            }
            
            if(parentheses.empty()){
                result += formationString.substr(1, formationString.size() - 2);
                formationString = "";
            }
        }
        return result;
    }
};
```