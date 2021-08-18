#include <stdio.h>
#include <stdlib.h>

//Garcia Samperio Janice Amairani

int main(void){
	
	int tabla[7][2];
	
	printf("ingrese valores para los valores de x,y\n\n");
	for (int i=0; i<7; i++)
	{
		for (int j= 0; j<2; j++)
		{
		
		printf("Elemento [x%d, y%d]: ", i, j);
		scanf("%d", &tabla[i][j]);
		}
}
	printf("\n\n Elementos almacenados en la tabla: \n\n");
	
		for (int i=0; i<7; i++)
	{
		for (int j= 0; j<2; j++){
		
		printf("%d  ", tabla[i][j]);
	
		}
		
	printf ("\n");
}
}
