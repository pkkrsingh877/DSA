```C++
class Solution {
public:
    int minimumChairs(string s) {
        int currentCount = 0;
        int maxCount = 0;

        for (char event : s) {
            if (event == 'E') {
                currentCount++;
                if (currentCount > maxCount) {
                    maxCount = currentCount;
                }
            } else if (event == 'L') {
                currentCount--;
            }
        }

        return maxCount;
    }
};
```