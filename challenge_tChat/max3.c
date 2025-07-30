/*Trouver le maximum entre trois nombres.

    Entrée : 3 12 7 → Sortie : 12
    */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// voici exemple pour les deux nombres
// int max(n1, n2){
//	if(n1>n2){
//		return n1;
//	}else {
//		return n2;
//	}
// }
/*
 * Voici le code pour les trois nombres
 */
int max1(int n1,int n2,int n3){
	if(n1 >n2 && n1 > n3){
	//if(n1 > n2 || n1>n3){              => teto zah nanao correction somary nomodifieko koa lay ambany
		return n1;
	}else if(n2 > n1 && n2>n3){
		return n2;
	}else {
	       return n3;
	}

}

int main(){
	printf(" %d", max1(53,111,2));
return 0;
}
