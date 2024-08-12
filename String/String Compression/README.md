```C++
class Solution {
public:
    int compress(vector<char>& chars) {
        int length = chars.size();
        int write = 0;
        int count = 0;
        for(int i = 0; i < length; i += count){
            char ch = chars[i];
            int j = i;
            count = 0;
            while(j < length && chars[i] == chars[j]){
                count++;
                j++;
            }
            chars[write++] = ch;
            int original = count;
            if(count > 1){
                string digitString = "";
                while(count){
                    int digit = count % 10;
                    count /= 10;
                    digitString += ('0' + digit);
                }
                int n = digitString.length();
                while(n){
                    chars[write++] = digitString[n - 1];
                    n--;
                }
            }
            count = original;
        }
        chars.resize(write);
        return chars.size();
    }
};
```