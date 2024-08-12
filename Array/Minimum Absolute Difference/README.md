```C++
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        int minimumDifference = INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size() - 1; i++){
            if(minimumDifference > arr[i + 1] - arr[i]){
                minimumDifference = arr[i + 1] - arr[i];
            }
        }
        for(int i = 0; i < arr.size() - 1; i++){
            if(minimumDifference == arr[i + 1] - arr[i]){
                result.push_back({arr[i],arr[i + 1]});
            }
        }
        return result;
    }
};
```