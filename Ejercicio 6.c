#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int SE[10][32]={0},fila=0,col=0,s=0;
	int rep[10]={0},i=0,cant=0,j=0;
	
	do {	
		
		j++;
		printf("\n Ingrese numero de sucio %d: ",j);
		scanf("%d",&s);
		
		rep[i]=s;
		
		if(s != 0) {
			
			do { 
				printf(" Edad de socio %d: ",j); 
				scanf("%d", &col); 
				if((col<0) || (col>99)){
					printf("\n ERROR: valor ingresado no valido"); 
					printf ("\n Ingrese la edad nuevamente"); 
					printf("\n");
				}
			}
			
			while((col<1) || (col>99)); 
			SE[fila][col-1]= s; 
		}
		
		cant++;
		fila++;   
	}
	
	while(fila < 10 && SE[fila-1][col-1]!= 0);    
	
	for(fila=0;fila<10;fila++){ 
		for(col=0;col<32;col++){ 
			if(SE[fila][col]!=0){ 
				printf("%d \t %d \n", SE[fila][col], col+1);         
			} 
		} 
	}  
	
	return 0;   
}
