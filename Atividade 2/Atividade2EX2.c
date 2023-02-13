#include <stdio.h>
#include <stdlib.h>

void lerElementos(int *vetor, int n);

int main(){
	int *elementos, n, j;

	printf("Digite um valor 'n': ");
	scanf("%d", &n);
	elementos = (int*) malloc(sizeof(int)*n);

	if(elementos==NULL){
	printf("Falha na alocacao de memoria.");
	exit(1);
	}

	lerElementos(elementos, n);

	for(j=0;j<n;j++){
	printf("%d ", elementos[j]);
	}

	free(elementos);

	return(0);
}

	void lerElementos(int *vetor, int i){
	int j;
	for(j=0;j<i;j++){
	printf("Elemento %d: ", j);
	scanf("%d", &vetor[j]);
	}
}
