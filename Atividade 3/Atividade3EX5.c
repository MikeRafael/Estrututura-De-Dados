#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int matriz[5][5], i, j, numAleatorios, x;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            numAleatorios = (rand() % 99) + 1;
            matriz[i][j] = numAleatorios;
            printf("%2d | ", matriz[i][j]);
			}
        printf("\n");
        }
        
    printf("\n");
    
	printf("Digite o valor de x: ");
    scanf("%d", &x);
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == x) {
            	printf("A linha de x %d a coluna de x %d\n", i,j);
			}	
        }
}
    		if (matriz[i][j] != x){
				printf("Valor nao encontrado");
			}    
  
    return 0; 
}
