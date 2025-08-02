/*
 *🟰 7. Vérifier si un nombre est un palindrome.

    Entrée : 121 → Sortie : Oui
    Entrée : 123 → Sortie : Non
 */
#include <stdio.h>
#include <stdbool.h>

// negative number can't be palindrome due to the negative sign
// if the last digit is 0; to be a palindrome, the first digit must also be 0
// the only number that meets this criteria is 0 itself

bool isPalindrome(int x){
   if(x < 0) || (x%10 == 0 && x!=0)){
      return false;
   }
   int reverseHalf = 0;
   while(x> reverseHalf0{
	reverseHalf = reverseHalf * 10 + x % 10;
	x/= 10;	
   }
   return x == reverseHalf || x == reverseHalf/10;

}

int main(){

return 0;
}
