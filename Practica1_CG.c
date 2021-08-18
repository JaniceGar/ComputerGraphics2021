#include <stdio.h>
#include <stdlib.h>

//Garcia Samperio Janice Amairani

int main(void){
	
	int tabla[7][2];
	
	printf("Enter the values for x, y\n\n");
	for (int i=0; i<7; i++)
	{
		for (int j= 0; j<2; j++)
		{
		
		printf("Element [x%d, y%d]: ", i, j);
		scanf("%d", &tabla[i][j]);
		}
}
	printf("\n\n Elements in the table\n\n");
	
		for (int i=0; i<7; i++)
	{
		for (int j= 0; j<2; j++){
		
		printf("%d  ", tabla[i][j]);
	
		}
		
	printf ("\n");
}
}


//1. Which C language compiler did you use?
// Answear: Dev-C++
//2. Which version of the C language compiler did you use?
//Answear: 5.1
//3. Do you know some line equations? 
// No
//Which ones?
//4. Write your GitHub user: 
//Answear: https://github.com/JaniceGar/ComputerGraphics2021.git
