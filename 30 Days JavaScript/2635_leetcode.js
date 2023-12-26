/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    for(i in arr){
        arr[i]=fn(parseInt(arr[i]),parseInt(i))
    }
    return arr;
};