#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[3][3],fila=0,col=0;
	
	
	for (fila=0;fila<3;fila++) {
		
		for (col=0;col<3;col++){
			printf ("\n De la fila %d, ingrese valor %d: ",fila+1,col+1);
			scanf ("%d",&matriz [fila][col]);
			
		}
	}
	printf("Pares: \n");
	
	for (fila=0;fila<3;fila+=2) {
		for (col=0;col<3;col++) {
			printf("%d\t", matriz[fila][col]);
		}
	
		printf("\n");
	
	}
	
	printf("Impares: \n");
	
	for (fila=1;fila<3;fila+= 2) {
		for (col=0;col<3;col++) {
			printf("%d\t", matriz[fila][col]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
