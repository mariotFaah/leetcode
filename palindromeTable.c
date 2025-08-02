#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int tab[], int taille){
	// On doit renverser le tableau
	int reverse[taille];
	for(int i = 0 ; i < taille; i++){
	   reverse[i]= tab[taille - i -1];
	}
	
	 for (int i=0; i<taille; i++){
	    if(reverse[i] != tab[i]){
	       return false;
	    }
	 }
	 return true;


}

int main(){
	int tableau[3] = {1,2,1};
	printf("%d", isPalindrome(tableau,3));

return 0;
}
