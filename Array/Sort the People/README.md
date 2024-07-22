```C++
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i = 0; i < heights.size() - 1; i++){
            int max_index = i;
            for(int j = i + 1; j < heights.size(); j++){
                if(heights[max_index] < heights[j]){
                    max_index = j;
                }
            }
            heights[i] = heights[i] + heights[max_index];
            heights[max_index] = heights[i] - heights[max_index];
            heights[i] = heights[i] - heights[max_index];
            string temp = names[i];
            names[i] = names[max_index];
            names[max_index] = temp;
        }
        return names;
    }
};
```