```C++
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int total = 0;
        string repeatedWord = word;
        while(sequence.find(repeatedWord) != string::npos){
            total++;
            repeatedWord += word;
        }
        return total;
    }
};
```