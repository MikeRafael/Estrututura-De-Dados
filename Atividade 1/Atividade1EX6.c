#include <stdio.h>
#include <stdlib.h>
	
void trocar(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int x = 3;
	int y = 5;	
	printf("ANTES: x = %d - y = %d\n", x, y);
	trocar(&x, &y);	
	printf("DEPOIS: x = %d - y = %d\n", x, y);
	return 0;
}
