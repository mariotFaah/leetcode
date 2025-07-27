#include <stdio.h>
#include <stdlib.h>

// Creation du fonction tri_a_bulle
void tri_a_bulle(int table[], int taille){
	for(int i=0; i<taille; i++){
		for(int j=0; j<taille-i-1;j++){
		   int temp;
		   if(table[j]>table[j+1]){
		     temp = table[j];
		     table[j] = table[j+1];
		     table[j+1]= temp;
		   }
		}
	}

}

int main(){
	int taille;
	printf("Entrer la taille du tableau");
	scanf("%d", &taille);
	int *tableau;
	tableau = (int*)malloc(sizeof(int)*taille);
	// le remplit avec de nombres aleatoire entree pas l'user
	for(int i=0; i<taille; i++){
		printf("index %d :", i);
		scanf("%d", &tableau[i]);
	}

	// on appelle bubble sort ici
	tri_a_bulle(tableau, taille);
	// on affiche notre tableau ici
	for(int i=0; i<taille;i++){
	  printf("-%d-",tableau[i]);
	}
	
	free(tableau);
	
	return 0;
}
