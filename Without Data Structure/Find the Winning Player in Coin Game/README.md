```C++
class Solution {
public:
    string losingPlayer(int x, int y) {
        int i = 1; // if i is even then it is alice's turn else it's bob's
        while(x >= 1 && y >= 4){
            x = x - 1;
            y = y - 4;
            i++;
        }
        if(i % 2 == 0){
            return "Alice";
        }else{
            return "Bob";
        }
    }
};
```