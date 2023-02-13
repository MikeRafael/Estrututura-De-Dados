#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int matriz[3][3], i, j, numAleatorios, soma;

    srand(time(NULL));

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            numAleatorios = (rand() % 99) + 1;
            matriz[i][j] = numAleatorios;
            printf("%2d | ", matriz[i][j]);
			}
        printf("\n");
        }
        
    printf("\n");
    soma = matriz[0][1] + matriz[0][2] + matriz[1][2]; 
	printf("A soma dos elementos acima da diagonal principal e: %d", soma);             
}
