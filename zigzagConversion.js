// This is a medium leetcode problem
/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    if(numRows === 1 || s.length < numRows) return s;
    let direction = false;
    let count = 0;

    let arr = new Array(numRows).fill("");
    for(let i=0; i<s.length;i++){
        let current=s[i];
        arr[count] += current;
        if(count === 0 || count >= numRows -1) direction = !direction;
        direction ? count++ : count--;
    }
    return arr.join("");

};
