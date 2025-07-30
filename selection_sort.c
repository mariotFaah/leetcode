#include<stdio.h>
#include<stdlib.h>

/*
 * Chercher la valeur minimum
 * Placer a l'index 0
 * On incremente par 1 l'index des autres valeurs
 * Refaire l'etape 1
 * parcourir le tableau, on recherchat la valeur minimum
 * Placer a l'index liste[1] cette valeur
 * on incremente par 1 l'index des autres valeurs
 * Refaire l'etape 1 jusqu a ce que la liste soi trier*/
void tri_selection(int liste[]; int taille){
	// Pour refaire cela je dois faire un boucle for de cette taille
	for(int i=0; i<taille;i++){
	   // Chercer la valeur minimum
	   int min;
	   if(liste[i]<liste[i+1]){
	      min = liste[i];
	   }else{
	     min = liste[i+1];
	   }
	   
	}

}
int main(){


return 0;
} 
