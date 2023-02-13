#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define L 3
#define C 3

int main() {

    int matriz[3][3], i, j, numAleatorios, soma;
    srand(time(NULL));

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            numAleatorios = (rand() % 99) + 1;
            matriz[i][j] = numAleatorios;
            printf("%2d | ", matriz[i][j]);
            if (j == C-i-1){
            	soma = soma + matriz[i][j];
			}
			}
        printf("\n");
        }
        
    printf("\n");
	printf("A soma dos elementos abaixo da diagonal principal e: %d", soma);             
}
