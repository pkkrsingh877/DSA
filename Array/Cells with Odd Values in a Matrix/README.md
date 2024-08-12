```C++
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> rows(m, 0);
        vector<int> cols(n, 0);
        for(int i = 0; i < indices.size(); i++){
            rows[indices[i][0]] += 1;
            cols[indices[i][1]] += 1;
        }
        int oddCount = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if((rows[i] + cols[j]) % 2 != 0){
                    oddCount++;
                }
            }
        }
        return oddCount;
    }
};
```