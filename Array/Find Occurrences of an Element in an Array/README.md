```C++
class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> result;
        vector<int> indexArray;
        
        for(int i = 0; i < nums.size(); i++){
            if(x == nums[i]){
                indexArray.push_back(i);
            }
        }
        
        for(int query : queries){
            if(query <= indexArray.size()){
                result.push_back(indexArray[query - 1]);
            }else{
                result.push_back(-1);
            }
        }
        return result;
    }
};
```