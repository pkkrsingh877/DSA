```C++
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> allLuckyNumbers = {};

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                int min = matrix[i][j];
                int max = matrix[i][j];
                bool column = false;
                bool row = false;
                for(int k = 0; k < matrix[i].size(); k++){
                    if(k != j && min > matrix[i][k]){
                        break;
                    }
                    if(k == matrix[i].size() - 1){
                        column = true;
                    }
                }
                for(int k = 0; k < matrix.size(); k++){
                    if(k != i && max < matrix[k][j]){
                        break;
                    }
                    if(k == matrix.size() - 1){
                        row = true;
                    }
                }
                if(row && column){
                    allLuckyNumbers.push_back(matrix[i][j]);
                }
            }
        }

        return allLuckyNumbers;
    }
};
```