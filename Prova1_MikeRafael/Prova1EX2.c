#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void mm(int vet[], int *mim, int *max)
{
   int i;

   *mim = vet[0];
   *max = vet[0];

    for ( i = 0; i < TAM; i++ )
    {
        if(vet[i] < *mim)
            *mim =  vet[i];

        if(vet[i] > *max)
            *max =  vet[i];
    }
}


int main()
{
    int *vet=NULL;
    int min, max;
    int i;

    vet = (int*) malloc (TAM* sizeof(int));
    printf("Elementos do vetor: \n");

    for(i=0; i<TAM; i++)
        vet[i]=i+29;
        printf("\n");

    for(i=0; i<TAM; i++)
        printf("Vetor %d = %d \n",i, vet[i]);
        
    mm(vet, &min, &max);
    printf("\n");
    printf("Menor elemento: %d\n",min);
    printf("Maior elemento: %d\n",max);
    free(vet);

    return 0;
}
