```C++
class Solution {
public:
    string reverseString(string s){
        for(int i = 0; i < s.length()/2; i++){
            char ch = s[i];
            s[i] = s[s.length() - 1 - i];
            s[s.length() - 1 - i] = ch;
        }
        cout << s << endl;
        return s;
    }
    string clearDigits(string s) {
        stack<char> box;

        for(int i = 0; i < s.length(); i++){
            if(s[i] > 47 && s[i] < 58 && !box.empty()){
                box.pop();
            }else{
                box.push(s[i]);
            }
        }

        string result = "";
        while(!box.empty()){
            result += box.top();
            box.pop();
        }

        return reverseString(result);
    }
};
```