```C++
class Solution {
public:
    bool isLeapYear(int year){
        if(year % 400 == 0){
            return true;
        }
        if(year % 100 == 0){
            return false;
        }
        if(year % 4 == 0){
            return true;
        } 
        return false;
    }
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        bool isLeap = isLeapYear(year);

        int array[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int intMonth = stoi(date.substr(5, 2));
        int countDays = 0;
        for(int i = 0; i < intMonth - 1; i++){
            countDays += array[i];
        }
        countDays += stoi(date.substr(8, 2));

        if(isLeap && intMonth > 2){
            return countDays + 1;
        }

        return countDays;
    }
};
```