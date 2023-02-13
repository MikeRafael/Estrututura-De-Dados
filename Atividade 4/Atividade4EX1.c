#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main (void){
    float p=1;
    struct carro{
        char marca[16];
        int ano;
        float preco;
    };
    struct carro lista[5];
    int x;
    for(x=0;x<5;x++){
        printf("Digite a marca do %i carro: ",x+1);
        scanf("%s",&lista[x].marca);
        fflush(stdin);
        printf("Ano: ");
        scanf("%i",&lista[x].ano);
        fflush(stdin);
        printf("Preco: ");
        scanf("%f",&lista[x].preco);
        fflush(stdin);
    }
    for(;;){
        printf("Procurar carros com preco abaixo de: ");
        scanf("%f",&p);
        fflush(stdin);

        if(p==0){
            exit(0);
        }

        int valida=0;
        int x;
        for(x=0;x<5;x++){
            if(lista[x].preco<p){
                printf("\nMarca: %s\tAno: %i\tPreco: %.2f\n\n", lista[x].marca, lista[x].ano, lista[x].preco);
                valida=1;
            }
        }
        if(valida==0){
            printf("\nN�o encontrado valor abaixo do preco estipulada.\n\n");
        }
    }
}
