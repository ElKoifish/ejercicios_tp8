#include <stdio.h>
#include <stdlib.h>

#define NUM_CLIENTES 100
#define NUM_TRANSACCIONES 4

int main() {
	double clientes[NUM_CLIENTES][NUM_TRANSACCIONES + 2]; 
	
	for (int i = 0; i < NUM_CLIENTES; ++i) {
		for (int j = 0; j < NUM_TRANSACCIONES + 2; ++j) {
			clientes[i][j] = 0.0;
		}
		clientes[i][0] = i + 1;
	}
	
	for (int i = 0; i < NUM_CLIENTES; ++i) {
		printf("Ingrese las transacciones para el Cliente %d:\n", i + 1);
		
		for (int j = 0; j < NUM_TRANSACCIONES; ++j) {
			int tipoTransaccion;
			double monto;
			
			printf("Código de transacción (1-Depósito, 2-Extracción, 3-Comisiones, 4-Intereses): ");
			scanf("%d", &tipoTransaccion);
			
			printf("Monto de la operación: ");
			scanf("%lf", &monto);
			
			clientes[i][tipoTransaccion] += monto;
		}
	}
	
	for (int i = 0; i < NUM_CLIENTES; ++i) {
		for (int j = 1; j <= NUM_TRANSACCIONES; ++j) {
			clientes[i][NUM_TRANSACCIONES + 1] += clientes[i][j];
		}
	}
	
	printf("\nN° De Cliente Total Depósitos Total Extracciones Total Comisiones Total Intereses Saldo\n");
	for (int i = 0; i < NUM_CLIENTES; ++i) {
		printf("%2.0f %14.2f %16.2f %14.2f %19.2f %8.2f\n",
			   clientes[i][0], clientes[i][1], clientes[i][2], clientes[i][3], clientes[i][4], clientes[i][5]);
	}
	
	double maxDeposito = 0.0;
	int clienteMaxDeposito = -1;
	
	for (int i = 0; i < NUM_CLIENTES; ++i) {
		if (clientes[i][1] > maxDeposito) {
			maxDeposito = clientes[i][1];
			clienteMaxDeposito = i + 1;
		}
	}
	
	printf("\nCliente con mayor cantidad depositada: %d\n", clienteMaxDeposito);
	printf("Cantidad: %.2f\n", maxDeposito);
	
	system("pause");
	return 0;
}
