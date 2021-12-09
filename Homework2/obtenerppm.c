#include <stdio.h>

int main(){
	int ancho,alto; //variables para las dimesiones de la imagen 
	printf("Dame los valores del ancho y el alto de la imagen\n \n Separalo con un espacio\n \n");
	scanf("%d %d", &ancho, &alto);
	
	//empezamos el encbezado del ppm
	//ppm consta de 2 partes: la primera es el encabezado que incia por el P3
	//Si es 3, es una imagen de color, si es escala de grises es 2 y si es binario 1.
//	Se imprimen los valores del ancho y alto
	printf("P3\n %d\n \n", ancho, alto); //P3is the header
	//el tercer elemento es le valor maximo que pueden tener ada uno de los colores en 
	//un piel 
	
	//datos que exiten para cada uno de los pixeles
	
	int i=0, j=0;
		for (j=0; j<alto; j++){
	
			for (i=0; i<ancho;i++){ //el ciclo recorre todo el tamaño 
			printf("255 0 0"); //imprime el color que indico;
		}
	}
}
