#include <stdio.h>
#include <stdlib.h>

void array(int arint[];){
	int arranjo[] = { 1,2,3,4,5,6,7 };
	int size = 7;
	int *pc;
	int i;
	for (i=0, pc=arranjo[0]; i < size; i++, pc++)
		printf("%d\n", arranjo[i]);
}

int main(){
	array();
	
	
}
