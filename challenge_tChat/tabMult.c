#include <stdio.h>
#include <stdlib.h>

void multiplication(int n){
	for(int i=0; i<=10; i++){
	   printf(" %d x %d = %d\n", n, i, n*i);
	}
}

int main(){
	int nombre;
	printf("entrer le nombre:");
	scanf("%d", &nombre);
	multiplication(nombre);


return 0;
}
