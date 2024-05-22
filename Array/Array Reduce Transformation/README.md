```JavaScript
/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    if(nums.length == 0){
        return init
    }else{
        return nums.reduce((acc, curr) => fn(acc, curr), init)
    }
};
```