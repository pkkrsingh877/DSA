```TypeScript
function findMaxK(nums: number[]): number {
    let posNegatives: number[] = [];
    for(let i = 0; i < nums.length; i++){
        for(let j = i + 1; j < nums.length; j++){
            if(nums[i] + nums[j] == 0){
                posNegatives.push(Math.abs(nums[i]));
            }
        }
    }
    let max: number = -1;
    for(let num of posNegatives){
        if(max < num){
            max = num;
        }
    }
    return max;
};
```