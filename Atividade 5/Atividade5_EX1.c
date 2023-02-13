#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
	if(n < 2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

	main(){
		int n, x;
		
		printf("Digite um numero:");
		scanf("%d", &n);
		
		x = fibonacci(n);
		printf("O valor do %d termo da sequencia de fibonacci e: %d", n, x);
	
}
