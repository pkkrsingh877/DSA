```C++
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> characters;
        vector<string> array;

        for(string str : arr){
            if(!characters.contains(str)){
                array.push_back(str);
            }
            characters[str]++;
        }

        int count = 0;

        for(int i = 0; i < array.size(); i++){
            if(characters[array[i]] == 1){
                count++;
                if(count == k){
                    return array[i];
                }
            }
        }

        return "";
    }
};
```