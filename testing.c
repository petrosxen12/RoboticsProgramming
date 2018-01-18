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

int main(int argc, const char* argv[]){	
	int offsetVal = -120;
	int ticksToMove = metersToTicks(1);

	#ifdef BUILDING_IN_SIMULATOR
	//simulator_startNewSmokeTrail();
	#endif

	drive_goto(offsetVal,offsetVal); //Initial offset so robot can have space
	drive_speed(1,1);
	drive_goto(20,20);
	//drive_goto(-51,0);
	//drive_goto(102,0);
	
	for (int i = 0; i < 4; ++i){
	drive_speed(1,1);
	drive_goto(ticksToMove,ticksToMove); //Drive one meter 
	drive_goto(-51,0);	
	}

		#ifdef BUILDING_IN_SIMULATOR
		//simulator_stopNewSmokeTrail();
	#endif

	showTicks(abs(offsetVal));
}


