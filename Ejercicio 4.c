#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[3][3], col=0, fila=0,i=0,j=0,temp=0;
	
	for(fila=0;fila<3;fila++){
		for(col=0;col<3;col++){
			printf("De la fila %d, ingrese el valor %d: ",fila+1,col+1);
			scanf("%d",&matriz[fila][col]);
		}
		
		printf("\n\n");
		
	}
	
	for(fila=0;fila<3;fila++){
		for(col=0;col<3;col++){
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					if(matriz[fila][col]<matriz[i][j]){
						temp=matriz[fila][col];
						matriz[fila][col]=matriz[i][j];
						matriz[i][j]=temp;
					}
				}
			}
		}
	}
	
	printf("Matriz ordenada: \n");
	
	for(fila=0;fila<3;fila++){
		for(col=0;col<3;col++){
			printf("%d ",matriz[fila][col]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
