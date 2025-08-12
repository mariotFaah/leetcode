// leetcode easy 
// ref: 344
// nampiasa two pointer ihany koa nefa
function reverseString(s){
  let taille = s.length;
  let gauche = 0;
  let droite = taille-1;
  while(gauche < droite){
     // Swap
     [s[left],s[right]] = [s[right], s[left]]
      left++;
      right--;
  }
 
return s;
}
