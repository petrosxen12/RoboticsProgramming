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

//Calibration value added for testing.
static void showTicks(int calibration){
	int left, right;
	drive_getTicks(&left, &right);
	print("%d %d\n", left+calibration, right+calibration);
}

//Make Space for Robot to travel
void initialStartPosition(){
	int offsetValHoriz = -180;
	int offsetValVert = 120;

	drive_goto(offsetValHoriz,offsetValHoriz);
	//drive_goto(51,0); //90 degrees right not zero radius.
	drive_goto(26,-25);
	drive_goto(offsetValVert,offsetValVert); 
	drive_goto(-26,25);	
	showTicks(0);
}

int main(int argc, const char* argv[]){	
	simulator_startNewSmokeTrail();
	//One wheel spins 180 degrees, and the other ones spins 180 hence the robot does a rotation of 360 degrees, full circle.
	drive_goto(-102,102);
}