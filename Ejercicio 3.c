#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[5][5],fila=0,col=0;
	
	for (fila=0;fila<5;fila++) {
		for (col=0;col<5;col++){
			printf ("\n De la fila #%d, ingrese valor #%d: ",fila+1,col+1);
			scanf ("%d",&matriz [fila][col]);
			
		}
	}
	
	printf("Diagonal principal:\n");
	
	for (fila=0;fila<5;fila++) {
		for (col=0;col<5;col++){
			if (fila == col) {
				printf("%d\t", matriz[fila][col]);
			} 
			else 
			{
				printf("\t");
			}
		}
		printf("\n");
	}
	
	printf("Triangulo superior:\n");
	
	for (fila=0;fila<5;fila++) {
		for (col=0;col<5;col++){
			if (fila <= col) {
				printf("%d\t", matriz[fila][col]);
			} else {
				printf("\t");
			}
		}
		printf("\n");
	}
	
	printf("Triangulo inferior:\n");
	
	for (fila=0;fila<5;fila++) {
		for (col=0;col<5;col++){
			if (fila >= col) {
				printf("%d\t", matriz[fila][col]);
			} else {
				printf("\t");
			}
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
