```C++
class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maximumVal = INT_MIN;
        int val = 0;
        for (string str : strs) {
            bool isdigit = false;
            bool ischaracter = false;
            for (char c : str) {
                if (std::isdigit(c)) {
                    isdigit = true;
                } else {
                    ischaracter = true;
                }
            }
            if (isdigit && ischaracter) {
                val = str.length();
            } else if (isdigit == false && ischaracter) {
                val = str.length();
            } else if (isdigit && ischaracter == false) {
                val = stoi(str);
            }
            if (maximumVal < val) {
                maximumVal = val;
            }
        }
        return maximumVal;
    }
};
```