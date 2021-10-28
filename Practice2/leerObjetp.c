//JANICE AMAIRANI GARCIA SAMPERIO
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int opcion;
	
				FILE *archivo;
			 	
			 	char caracteres[100];
			 	
			 	archivo = fopen("Cubo.obj","r");
			 	
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
	
		
	
}
