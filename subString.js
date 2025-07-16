/**
 * @param {string} s
 * @return {number}
 */


var lengthOfLongestSubstring = function(s) {
   let lavaBe = 0;
   let set = new Set();

   let havia = 0;
   let havanana = 0;

   while(havanana <s.length){
    let soratra = s[havanana];
    if( !set.has(soratra)){
        set.add(soratra);
        lavaBe = Math.max(lavaBe, set.size);
        havanana++;
    }else{
        set.delete(s[havia]);
        havia++;
    }
   }
   return lavaBe;
};
