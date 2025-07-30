#include <stdio.h>
#include <stdlib.h>


int main(){
// premierement je cree un tableau de deux valeurs
int tableau[2] = {9,3};
// j'affiche ici les valeurs dans le tableau
printf("Voici les elements du tableau avant tri");
for(int i=0; i<2; i++){
    printf("-%d-", tableau[i]);
}
// Puis, je cherche la valeur minimum du tableau
int minimum, max ;
if(tableau[0] < tableau[1]){
    minimum = tableau[0];
    max = tableau[1];
}else{
    minimum = tableau[1];
    max = tableau[0];
}

// apres je dois afficher le minimum
printf("\nvoici la valeur mimum de notre tableau %d", minimum);
// Afficher le tableau en ordre croissant
printf("\nVoici le tableau apres le tri de valeur minimum et maximum:- %d -%d", minimum, max);

return 0;
}
