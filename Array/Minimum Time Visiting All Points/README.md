```C++
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int minTime = 0;
        for (int i = 1; i < points.size(); ++i) {
            int x = abs(points[i][0] - points[i - 1][0]);
            int y = abs(points[i][1] - points[i - 1][1]);
            minTime += max(x, y);
        }
        
        return minTime;
    }
};
```
