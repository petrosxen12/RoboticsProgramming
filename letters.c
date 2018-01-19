#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
//add definition of struct timeval in Windows
#include <winsock.h>
#endif

#include "abdrive.h"
#include "simpletext.h"
#include "simpletools.h"
#include "ping.h"

#ifdef BUILDING_IN_SIMULATOR
#include "simulator.h"
#endif

void drawA(){
	print("A");
}
void drawE(){
	print("E");
	//print("hi");
}
void drawF (){
	print("F");
}
void drawH(){
	print("H");
}
void drawI(){
	print("I");
}
void drawK(){
	print("K");
}
void drawL(){
	print("L");
}


char inputLetters[8];

int main(int argc, const char* argv[]){	

	for (int i = 0; i < 8; ++i)
	{
		inputLetters[i] = 'n';
	}

	print("Enter letters (maximum 7):\n");
	getStr(inputLetters,7);

	int j=0;

	while(inputLetters[j] != 'n'){
		switch(inputLetters[j]){
			case 'A':
				drawA();
			break;

			case 'E':
				drawE();
			break;

			case 'F':
				drawF();
			break;

			case 'H':
				drawH();
			break;

			case 'I':
				drawI();
			break;
			
			case 'K':
				drawK();
			break;

			case 'L':
				drawL();
			break;
	}
			j++;
	}

}
