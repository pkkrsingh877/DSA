```C++
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(string detail : details){
            if(stoi(detail.substr(11, 2)) > 60){
                count++;
            }
        }
        return count;
    }
};
```