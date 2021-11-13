#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 	int opcion;
	FILE *archivo;
	char caracteres[100]; 
	int v;
	int c;
	int tot = v*c;
	printf("Practice 2: We have to read an obj file and obtain the values, then create a ppm image \n ");
	
	printf("Welcome\n Choose an option\n ");
	printf("\n 1. Read the teacher's file\n Warning: It takes its time'\n");
	printf("\n 2. Read Cubo.obj \n ");
	printf("\n 3. Give the values for a new .obj\n ");
	
	scanf("%d",&opcion);
	
	switch (opcion){
		case 1: 
				//FILE *archivo;
			 	
			 	//char caracteres[100];
			 	printf("\n Actually it is not the teacher's file, that was super heavy. \n I couldn't upload it to github' \n This is another file \n ");
			 	archivo = fopen("BOTTLE MID POLY.obj","r");
			 	
			 	if (archivo == NULL)
			 		exit(1);
			 	else
			        {
			 	    printf("\nThe values are \n\n");
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
			 	    printf("\nThe values are \n\n");
			 	    while (feof(archivo) == 0)
			 	    {
			 		fgets(caracteres,100,archivo);
			 		printf("%s",caracteres);
			 	    }
			            system("PAUSE");
			        }
			        fclose(archivo);
			    return 0;
		case 3: 
				
				printf("\n Write the vertexes number: ");
				scanf("%d",&v);
				printf("\n Write the faces number: ");
				scanf("%d",&c);
				//int tot = v*c;
				printf("\n Totally lines to draw: %d",&tot);
				return 0;
				
	}
	while (opcion !=3);
	return 0;
}
