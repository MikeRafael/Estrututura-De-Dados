#include <stdio.h>
#include <stdlib.h>


	int somaVetor(int vet[], int n) {
		if(n == 1) {
		return vet[0];
	}
		return vet[n - 1] + somaVetor(vet, n - 1);
}

	int main(){
		int vet[];
		int n;
		
		printf("Digite o valor de n:");
		scanf("%d", &n);
		
		printf("Digite os valores do vetor:");
		scanf("%d", &vet[]);
		
		printf(somaVetor(vet[], n));
	}
