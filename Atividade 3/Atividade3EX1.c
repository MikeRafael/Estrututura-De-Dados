#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int matriz[4][4], i, j, numAleatorios, contador;
    contador = 0;
    

    srand(time(NULL));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            numAleatorios = (rand() % 99) + 1;
            matriz[i][j] = numAleatorios;
            printf("%2d | ", matriz[i][j]);
            if (matriz[i][j] > 10){
			contador = contador + 1;
			} 
        }
        printf("\n");
    }
    printf("Numeros maiores que 10: %d\n", contador);

    printf("\n");
  
    return 0;
}
