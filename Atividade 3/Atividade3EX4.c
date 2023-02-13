#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	int matriz[4][4], i, j, numAleatorios, linha, coluna;
	int maior[0][0];
	
	srand(time(NULL));
	
	for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            numAleatorios = (rand() % 99) + 1;
            matriz[i][j] = numAleatorios;
            printf("%2d | ", matriz[i][j]);
            if (maior[0][0] < matriz[i][j]){
            	maior[0][0] = matriz[i][j];
            	linha = i;
            	coluna = j;
			}
			    
        }
        printf("\n");
    }
    printf("\n");
    printf("A maior matriz e: %d\n", maior[0][0]);
    printf("A maior matriz esta na linha %d e na coluna %d", linha,coluna);		
			
    return 0;
	
}
