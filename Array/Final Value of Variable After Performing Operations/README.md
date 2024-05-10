```C++
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int final = 0;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "++X" || operations[i] == "X++"){
                final++;
            }else if(operations[i] == "--X" || operations[i] == "X--"){
                final--;
            }
        }
        return final;
    }
};
```