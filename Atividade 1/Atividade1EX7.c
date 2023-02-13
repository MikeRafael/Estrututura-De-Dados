#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	int x;
	x  = 10;
	int *p1;
	int **p2;
	int **p3;
	p1 = &x;
	p2 = &p1;
	p3 = &p2;
	
	printf("O endereco de x = %d\n", &x);
	printf("O valor de x = %d\n", x);
	
	printf("O conteudo de *p1 = %d\n", p1);
	printf("O endereco de *p1 = %d\n", &p1);
	
	printf("O conteudo de *p2 = %d\n", p2);
	printf("O endereco de *p2 = %d\n", &p2);
	
	printf("O conteudo de *p3 = %d\n", p3);
	printf("O endereco de *p3 = %d\n", &p3);
	
	getch();
	return(0);
	
}
