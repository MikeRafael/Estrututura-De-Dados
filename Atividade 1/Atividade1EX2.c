#include <stdio.h>

int main ()
{
  int x, y;

    printf("Digite um numero: ");
        scanf("%i", &x);
    printf("Digite mais um numero: ");
        scanf("%i", &y);
        
    printf("Endereco da variavel x = %d\n", &x);
    printf("Endereco da variavel y = %d\n", &y);

    if(&x > &y){
        printf(" x tem o maior endereco de memoria\n");
        printf("Endereco maior: %d\n", &x);
        return;
    }
    printf("y tem o maior endereco de memoria\n");
  
}
