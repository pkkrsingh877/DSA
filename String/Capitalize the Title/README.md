```C++
class Solution {
public:
    string capitalizeTitle(string title) {
        int length = 0;
        int charIndex = 0;
        vector<int> toCapitalize;
        for(int i = 0; i < title.length(); i++){
            if(title[i] == ' '){
                if(length > 2){
                    toCapitalize.push_back(charIndex);
                }
                charIndex = i + 1;
                length = 0;
            }else{
                length++;
            }
            
        }
        if(length > 2){
            toCapitalize.push_back(charIndex);
        }
        for(int i = 0; i < title.length(); i++){
            if(title[i] > 64 && title[i] < 91){
                title[i] += 32;
            }
        }
        for(int i : toCapitalize){
            if(title[i] > 96 && title[i] < 123){
                title[i] -= 32;
            }
        }
        return title;
    }
};
```