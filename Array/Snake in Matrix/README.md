```C++
class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>> grid(n, vector<int>(n));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                grid[i][j] = ((i * n) + j);
            }
        }
        int i = 0;
        int j = 0;
        for(string command : commands){
            if(command == "RIGHT"){
                j++;
            }else if(command == "LEFT"){
                j--;
            }else if(command == "UP"){
                i--;
            }else if(command == "DOWN"){
                i++;
            }
        }

        return grid[i][j];
    }
};
```