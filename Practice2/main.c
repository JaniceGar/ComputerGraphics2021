#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 	int opcion, v, c;
	FILE *archivo;
	char caracteres[100]; 
	
	printf("Bienvenido\n Elija una opcion\n ");
	printf("\n 1. Leer el archivo dado por el profe\n Advertencia: Va a durar un rato\n");
	printf("\n 2. Leer el archivo Cubo.obj \n ");
	printf("\n 3. Ingresar los valores para un nuevo .obj\n ");
	
	scanf("%d",&opcion);
	
	switch (opcion){
		case 1: 
				//FILE *archivo;
			 	
			 	//char caracteres[100];
			 	
			 	archivo = fopen("model.obj","r");
			 	
			 	if (archivo == NULL)
			 		exit(1);
			 	else
			        {
			 	    printf("\nEl contenido del archivo de prueba es \n\n");
			 	    while (feof(archivo) == 0)
			 	    {
			 		fgets(caracteres,100,archivo);
			 		printf("%s",caracteres);
			 	    }
			            system("PAUSE");
			        }
			        fclose(archivo);
				return 0;
		case 2:
				archivo = fopen("cubo.obj","r");
			 	
			 	if (archivo == NULL)
			 		exit(1);
			 	else
			        {
			 	    printf("\nEl contenido del archivo de prueba es \n\n");
			 	    while (feof(archivo) == 0)
			 	    {
			 		fgets(caracteres,100,archivo);
			 		printf("%s",caracteres);
			 	    }
			            system("PAUSE");
			        }
			        fclose(archivo);
		case 3: 
				printf("\n Escribe el numero de vertices");
				scanf("%d", &v);
				printf("\n Escribe el numero de aristas");
				scanf("%d", &c);
				int tot = v*c;
				printf("\n El numero de lineas totales por hacer es de: %d", &tot);
	}
	while (opcion !=3);
	return 0;
}
