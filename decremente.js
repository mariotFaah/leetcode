// Cette fonction retourne un tableau inversee
function reverseString(s){
    let reversed = [];
    let taille = s.length;
    for(let i=0; i<taille; i++){
       reversed[i] = s[taille-i-1];
    }
	return reversed;
}

console.log(reverseString(["o","l","l","e","h"]));

for(let i=0; i<5; i++){
   console.log(5-i-1);
}
