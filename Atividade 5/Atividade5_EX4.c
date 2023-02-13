#include <stdio.h>
#include <stdlib.h>


	int retNaturaisDec(int n) {
	if(n == -1) {
	return 0;
	}
	printf("%d\n", n);
	retNaturaisDec(n - 1);
}

	int retNaturaisDecSig(int n) {
	if(n < 0) {
		return retNaturaisDec(n * -1);
	}
	return retNaturaisDec(n);
}

	int main(){
	int n;
	
	printf("Digite um numero:");
	scanf("%d", &n);
	
	retNaturaisDec(n);
	}
