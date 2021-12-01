#include<stdio.h>
//#include<graphics.h>
// A naive way of drawing line
/*
void naiveDrawLine(x1, x2, y1, y2)
{
   int m = (y2 - y1)/(x2 - x1);
   int x;
   for (x  = x1; x <= x2; x++) 
   {    
   int c
      // Assuming that the round function finds
      // closest integer to a given float.
      int y = round((m*x) + c);    
      print(x, y); 
   }
}*/

//pruebas por que no compila
#include<graphics.h>
#include<conio.h>
int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\Users\\yanis\\Documents\\turbo-c\\BGI");
       
   getch();
   closegraph();
   return 0;
}
