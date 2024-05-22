```JavaScript
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    if(arr.length == 0){
        return arr
    }else{
        let i = 0;
        return arr.map((el, i) => fn(el, i))
    }
};
```