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

void makeTurnLeftNR()
{
		drive_goto(-8,-8);
		simulator_stopSmokeTrail();
		drive_goto(-26,25);
		drive_goto(8,8);
}

void makeTurnRightNR()
{
  drive_goto(-10,-10);
  simulator_stopSmokeTrail();
  drive_goto(26,-25);
  drive_goto(8,8);
}

void drawA(){
  drive_goto(-20,20);
  simulator_startNewSmokeTrail();
  drive_goto(82,82);
  simulator_stopSmokeTrail();
  drive_goto(-23,0);
  drive_goto(12,12);
  simulator_startNewSmokeTrail();
  drive_goto(-80,-80);
  simulator_stopSmokeTrail();
  drive_goto(30,30);
  drive_goto(-20,20);
  drive_goto(8,8);
  simulator_startNewSmokeTrail();
  drive_goto(26,26);
  simulator_stopSmokeTrail();

  // reset starting position
  drive_goto(-33,-33);
  drive_goto(-28,25);
  drive_goto(30,30);
  drive_goto(-26,25);
  drive_goto(30,30);

}

void drawE(){
  simulator_startNewSmokeTrail();
  drive_goto(40,40);
  simulator_stopSmokeTrail();
  drive_goto(-40,-40);
  makeTurnLeftNR();
  simulator_startNewSmokeTrail();
  drive_goto(40,40);
  makeTurnRightNR();
  simulator_startNewSmokeTrail();
  drive_goto(40,40);
  simulator_stopSmokeTrail();
  drive_goto(-40,-40);
  makeTurnLeftNR();
  simulator_startNewSmokeTrail();
  drive_goto(30,30);
  makeTurnRightNR();
  simulator_startNewSmokeTrail();
  drive_goto(40,40);
  simulator_stopSmokeTrail();

   // reset starting position
   drive_goto(25,-25);
   drive_goto(70,70);
   drive_goto(-25,25);
   drive_goto(10,10);
}

void drawF(){
  drive_goto(-8,-8);
  drive_goto(-26,25);
  drive_goto(8,8);
  simulator_startNewSmokeTrail();
  drive_goto(40,40);
  makeTurnRightNR();
  drive_goto(40,40);
  simulator_startNewSmokeTrail();
  drive_goto(-40,-40);
  simulator_stopSmokeTrail();
  makeTurnLeftNR();
  simulator_startNewSmokeTrail();
  drive_goto(30,30);
  makeTurnRightNR();
  simulator_startNewSmokeTrail();
  drive_goto(40,40);
  simulator_stopSmokeTrail();

  // reset starting position
  drive_goto(-25,25);
  drive_goto(-70,-70);
  drive_goto(25,-25);
  drive_goto(20,20);
}

void drawH(){

  drive_goto(-8,-8);
  drive_goto(-26,25);
  drive_goto(8,8);
  simulator_startNewSmokeTrail();
  drive_goto(80,80);
  simulator_stopSmokeTrail();
  drive_goto(-32,-32);
  drive_goto(-10,-10);
  drive_goto(26,-25);
  drive_goto(8,8);
  simulator_startNewSmokeTrail();
  drive_goto(40,40);
  makeTurnLeftNR();
  drive_goto(32,32);
  simulator_startNewSmokeTrail();
  drive_goto(-80,-80);
  simulator_stopSmokeTrail();

  //reset starting position
  drive_goto(25,-25);
  drive_goto(20,20);

}

void drawI(){
  drive_goto(-8,-8);
  drive_goto(-26,25);
  drive_goto(8,8);
  drive_goto(80,80);
  simulator_startNewSmokeTrail();
  drive_goto(-80,-80);
  makeTurnRightNR();
  drive_goto(20,20);
}

void drawL(){
	simulator_startNewSmokeTrail();
  drive_goto(40,40);
	simulator_stopSmokeTrail();
  drive_goto(-40,-40);
	drive_goto(-8,-8);
	drive_goto(-26,25);
	drive_goto(8,8);
	simulator_startNewSmokeTrail();
  drive_goto(70,70);
  simulator_stopSmokeTrail();

  //reset starting position
  drive_goto(60,60);
}

void drawK(){
  drive_goto(-8,-8);
  drive_goto(-26,25);
  drive_goto(8,8);
  simulator_startNewSmokeTrail();
  drive_goto(70,70);
  simulator_stopSmokeTrail();
  drive_goto(-35,-35);
  drive_goto(13,-13);
  drive_goto(8,8);
  drive_goto(50,50);
  simulator_startNewSmokeTrail();
  drive_goto(-50,-50);
  makeTurnRightNR();
  simulator_startNewSmokeTrail();
  drive_goto(50,50);
  simulator_stopSmokeTrail();
  drive_goto(-8,-8);
  drive_goto(-13,13);
  drive_goto(8,8);

  //reset starting position
  drive_goto(20,20);
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
