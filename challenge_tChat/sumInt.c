#include <stdio.h>
/*
 * 4. Afficher la somme des n premiers entiers.

    Entrée : 5 → Sortie : 15 (1+2+3+4+5)
    */
int somme(int n){
   int somme=0;
   for(int i=1; i<=n; i++){
     somme = somme+ i;
   }
   return somme;
}

int main(){
	int nombre;
	printf("Entrer le nombre :");
	scanf("%d", &nombre);
	printf(" somme premier entier : %d", somme(nombre));

return 0;
}
