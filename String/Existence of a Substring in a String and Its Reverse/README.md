```C++
class Solution {
public:
    string reverseString(string s){
        stack<char> reverseStack;
        for(int i = 0; i <= s.length(); i++){
            reverseStack.push(s[i]);
        }
        s = "";
        while(!reverseStack.empty()){
            char ch = reverseStack.top();
            s += ch;
            reverseStack.pop();
        }

        return s;
    }
    bool isSubstringPresent(string s) {
        string reverse = reverseString(s);
        cout << reverse << endl;

        for(int i = 0; i < s.length(); i++){
            for(int j = i; j < s.length(); j++){
                string substring = s.substr(i, j - i + 1);
                if(substring.length() == 2 && reverse.find(substring) != string::npos){
                    cout << substring << endl;
                    return true;
                }
            }
        }
        return false;
    }
};
```