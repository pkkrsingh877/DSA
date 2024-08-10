```C++
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr = {first};
        for(int i = 0; i < encoded.size(); i++){
            int temp = arr[i] ^ encoded[i];
            arr.push_back(temp);
        }
        return arr;
    }
};
```