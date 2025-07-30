#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Dans cette programme il nous donne un liste "n" , avec de nombre positif et negatif, mains nous devons chercher le nombre
// le plus proche de zero  ex -3 ,-2, -1, 0, 1, 15 dans cette liste , le plus proche de zero c'est 1
// notre formule c'est parcourir le tableau , puis comparer les indexs du tableau on cherchant la valeur minimum de cette formule 
// (n*n)/n

int approx_zero(int tableau[], int taille){
	int min;
	for(int i=0; i<taille; i++){
		if(((tableau[i]*tableau[i])/tableau[i]) < ((tableau[i+1]*tableau[i+1])/tableau[i+1])){
				min =tableau[i];

				}
	}
}
int main(){

	// le nombre de temperature a analyser
	int n;
	scanf("%d", &n);
	int tab[n];
	for(int i=0; i<n; i++){
		 // a temperature expressed as an integer ranging from -273 to 552
		 
		 scanf("%d", &tab[i]);
	}

	printf("result %d\n",approx_zero(tab,n));


return 0;
}
