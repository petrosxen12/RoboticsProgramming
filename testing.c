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
	int offsetValHoriz = -160;
	int offsetValVert = 100;

	drive_speed(3,3);
	drive_goto(offsetValHoriz,offsetValHoriz);
	drive_goto(51,0); //90 degrees right
	drive_goto(offsetValVert,offsetValVert); //30 ticks down
	drive_goto(-51,0);
	showTicks(0);
}

int main(int argc, const char* argv[]){	
	
	initialStartPosition();
	int ticksToMove = metersToTicks(1);

	#ifdef BUILDING_IN_SIMULATOR
	//simulator_startNewSmokeTrail();
	#endif

	for (int i = 0; i < 4; ++i){
	drive_speed(1,1);
	drive_goto(ticksToMove,ticksToMove); //Drive one meter 
	drive_goto(-51,0);	
	}

		#ifdef BUILDING_IN_SIMULATOR
		//simulator_stopNewSmokeTrail();
	#endif

	//showTicks(abs(offsetVal));
}


