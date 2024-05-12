```cpp
class Solution {
public:
    string interpret(string command) {
        string interpretation = "";
        for(int i = 0; i < command.length(); i++){
            if(command[i] == 'G'){
                interpretation += command[i];
            }else if(command[i] == '(' && command[i + 1] == ')'){
                interpretation += "o";
                i++;
            }else if(command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')'){
                interpretation += "al";
                i += 3;
            }
        }
        return interpretation;
    }
};
```