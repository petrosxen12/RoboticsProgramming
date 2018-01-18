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

static void showTicks(int calibration){
	int left, right;
	drive_getTicks(&left, &right);
	print("%d %d\n", left+calibration, right+calibration);
}

int metersToTicks(int meters){
	int milimeters = meters*1000;
	int mmToTicks = milimeters/3.25;
	return mmToTicks;
}

void initialStartPosition(){
	int offsetValHoriz = -180;
	int offsetValVert = 120;

	//drive_speed(3,3);
	drive_goto(offsetValHoriz,offsetValHoriz);
	//drive_goto(51,0); //90 degrees right not zero radius.
	drive_goto(26,-25);
	drive_goto(offsetValVert,offsetValVert); //30 ticks down
	drive_goto(-26,25);	
	showTicks(0);
}

int main(int argc, const char* argv[]){	

	int ticksToMove = round(metersToTicks(1));
	//print("%d",ticksToMove);
	
	initialStartPosition();
/*
	#ifdef BUILDING_IN_SIMULATOR
		simulator_startNewSmokeTrail();
	#endif

	for (int i = 0; i < 4; ++i){
	//drive_speed(1,1);
	drive_goto(ticksToMove,ticksToMove); //Drive one meter 
	pause(100);

	#ifdef BUILDING_IN_SIMULATOR
  	simulator_stopSmokeTrail();
  	#endif
  	
  	pause(100);
  	drive_goto(-26,25);	
  	
  	#ifdef BUILDING_IN_SIMULATOR
		simulator_startNewSmokeTrail();
	#endif
	}
	*/
	drive_goto(-100,-100);
	showTicks(0);
	simulator_startNewSmokeTrail();
	
	drive_goto(ticksToMove,ticksToMove);
	drive_goto(11,11);
	drive_goto(-11,-11);
	
	simulator_stopSmokeTrail();

	drive_goto(-26,25);
	drive_goto(9,9);
	simulator_startNewSmokeTrail();

	drive_goto(ticksToMove,ticksToMove);
	showTicks(0);



	//showTicks(abs(offsetVal));
}


