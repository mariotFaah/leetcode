#include <stdio.h>
#include <stdlib.h>

/*
 * Ici nous venons de creer un algorithme de tri
 * Cette algo de tri a bulle est un peu lent mais il est fondamentale
 * je veux savoir un peux a coder en c , quelle est son but au competitive programming et aussi au niveau du notion du programmation en general meme si je suis un developpeur fullstack js . je veux savoir ton reponse
 * */

int bubble_sort(int table){
   int taille = sizeof(table) / sizeof(table[0]);
   for(int i=0; i<taille; i++){
      for(int j=0; j<taille-i-1; j++){
         int temp;
	 if(table[i]>table[i+1]){
	    // on fais de swap ou echange ici;
	    temp = table[i+1];
	    table[i+1] = table[i];
	    table[i] = temp;
	 }
      }
   }
  return table;
}

int main(){



return 0;
}
