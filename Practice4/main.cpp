#include <cstdlib>
#include <iostream>
#include <graphics.h>
#include <windows.h>
using namespace std;

//trying to make a funny kirby image


void animacion (void){
	readimagefile("0-0000.jpg", 40,40,10,120);
	Sleep(50);
	readimagefile("1-0000.jpg", 40,40,10,120);
	Sleep(50);
	readimagefile("2-0000.jpg", 40,40,10,120);
	Sleep(50);
	readimagefile("3-0000.jpg", 40,40,10,120);
	Sleep(50);
	readimagefile("4-0000.jpg", 40,40,10,120);
	Sleep(50);
	readimagefile("5-0000.jpg", 40,40,10,120);
	Sleep(50);
	readimagefile("6-0000.jpg", 40,40,10,120);
	Sleep(50);
}


int main (int argc, char *argv[]){
	initwindow(400,400,"Kirby",400,250);
	setcolor(15);  	cleardevice();
		while (!kbhit()){
			animacion();
		}
		getch();
}


