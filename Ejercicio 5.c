#include <stdio.h>
#include <stdlib.h>

int main() {
	int sorteos[3][6],fila=0,col=0;
	int frec[43] = {0};
	int random=0,num=0,t=0,maxFrec= 0;;
	
	for (int s = 0; s < 3; s++) {
		
		printf("Ingresar 6 numeros para el sorteo %d (de 0 a 42):\n", s + 1);
		
		for (int i = 0; i < 6; i++) {
			int numero;
			do {
				scanf("%d", &numero);
			} while (numero < 0 || numero > 42 || frec[numero] > 0);
			sorteos[s][i] = numero;
			frec[numero]++;
		}
	}
	
	for (int s = 0; s < 3; s++) {
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 6; j++) {
				if (sorteos[s][i] > sorteos[s][j]) {
					t = sorteos[s][i];
					sorteos[s][i] = sorteos[s][j];
					sorteos[s][j] = t;
				}
			}
		}
	}
	
	printf("\n Sorteos ordenados: \n ");
	
	for (fila=0;fila<3;fila++) {
		printf("Sorteo %d: ", fila + 1);
		for (col=0;col<6;col++) {
			printf("%d  ", sorteos[fila][col]);
		}
		printf("\n");
	}
	
	printf("\n Ingresar un numero random para buscar su frecuencia: ");
	scanf("%d", &random);
	
	
	for (fila= 0;fila<3;fila++) {
		for (col=0;col<6;col++) {
			if (sorteos[fila][col] == random) {
				frec[random]++;
				if (frec[random] > maxFrec) {
					maxFrec = frec[random];
				}
			}
		}
	}
	
	printf("\n Numeros que mas veces salieron:\n");
	for (fila =0;fila< 43;fila++) {
		if (frec[random] == maxFrec) {
			printf("%d\n", fila);
		}
	}
	
	system("pause");
	return 0;
}
