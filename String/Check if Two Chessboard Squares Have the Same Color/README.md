```C++
class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int first = (coordinate1[0] - 'a' + 1) + (coordinate1[1] - '0');
        int second =  (coordinate2[0] - 'a' + 1) + (coordinate2[1] - '0');
        if(first % 2 ==  second % 2){
            return true;
        }
        return false;
    }
};
```