#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz [6][5], fila=1,col=1,f=1;
	
	for (fila=0;fila<6;fila++) {
		
		for (col=0;col<5;col++){
			printf ("\n De la fila #%d, ingrese valor #%d: ",fila+1,col+1);
			scanf ("%d",&matriz [fila][col]);
			f=matriz [fila][col];
			
			if (f==0){
				printf ("\n\n");
				
				for (fila=0;fila<6;fila++){
					for (col=0;col<5;col++){
						printf("%d  ",matriz[fila][col]);
					}
					printf ("\n");
				}
			}
		}
	}
	return 0;
}
