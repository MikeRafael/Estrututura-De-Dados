#include <stdio.h>

int main () {
 
    int x;
    int y;
    
    printf("Endereco da variavel x = %d\n", &x);
    printf("Endereco da variavel y = %d\n", &y);

    if (&x > &y)
      {
	    printf("A variavel x tem o maior endereco de memoria\n");
	    printf("Endereco maior: %d\n", &x);
	        return;
      }
    printf("A variavel y tem o maior endereco de memoria\n"); 
  
}
