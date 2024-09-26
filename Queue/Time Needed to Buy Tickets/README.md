```C++
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> line;
        
        for(int i = 0; i < tickets.size(); i++){
            line.push(i);
        }
        
        int seconds = 0;
        while(tickets[k] != 0){
            int index = line.front();
            tickets[index]--;
            seconds++;
            
            line.pop();
            if(tickets[index] != 0){
                line.push(index);
            }
        }
        return seconds;
    }
};
```