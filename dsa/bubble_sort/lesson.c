#include <stdio.h>
#include <stdlib.h>

// Voici la fonction qui fais le tri a bulle , comment s'appelle sorted array en francais
void tri_a_bulle(int tableau[], int taille){
	for(int i=0; i<taille; i++){
		for(int j=0; j<(taille-i-1);j++){
			int temp;
			if(tableau[j] < tableau[j+1]){
				temp = tableau[j];
				tableau[j] = tableau[j+1];
				tableau[j+1]= temp;
			}
		}
	}
}

int main(){

	int liste[5] = {9, 14, 45,7,13};
	int taille = 5;
	printf("Notre liste avant tri: ");
	for(int i=0; i<taille; i++){
		printf("-%d-", liste[i]);
	}
	tri_a_bulle(liste, taille);
	printf("\nAvec tri dans l'ordre decroissant: ");
	for(int i=0; i<taille; i++){
		printf("-%d-", liste[i]);
	}

return 0;
}
