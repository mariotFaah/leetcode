/* 1. Écrire un programme qui affiche si un nombre est pair ou impair.

    Entrée : 4 → Sortie : pair
    Entrée : 7 → Sortie : impair
 */
#include<stdio.h>
#include <stdlib.h>

// cette programme est simple je pense 
void est_ce_pair(int n){
	if(n%2 == 0){
		printf("il est pair\n");
	}else{
		printf("il est impair\n");
	}
}

int main(){
	int nombre1 = 3;
	int nombre2 = 2;
	est_ce_pair(nombre1);
	est_ce_pair(nombre2);

return 0;
}
