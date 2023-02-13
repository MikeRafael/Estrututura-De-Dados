#include <stdio.h>
#include <stdlib.h>


	int retNaturais(int n) {
	if(n == -1) {
		return 0;
	}
	1 + retNaturais(n - 1);
	printf("%d\n", n);
}

	int retNaturaisSig(int n) {
	if(n < 0) {
		return retNaturais(n * -1);
	}
	return retNaturais(n);
}
	int main(){
	int n;
		
	printf("Digite um numero:");
	scanf("%d", &n);
	
	retNaturais(n);
		
	
	}
