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


void makeTurnLeftNR();

//Calibration value added for testing.
static void showTicks(int calibration){
	int left, right;
	drive_getTicks(&left, &right);
	print("%d %d\n", left+calibration, right+calibration);
}

//Convert meters to ticks
int metersToTicks(int meters){
	int milimeters = meters*1000;
	int mmToTicks = milimeters/3.25;
	return mmToTicks;
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

	//Convert meters to ticks which is 307.68 around 308.
	int ticksToMove = round(metersToTicks(1));
	
	initialStartPosition();
	
	//Starting position of ticks
	showTicks(0);
	//simulator_startNewSmokeTrail();
	

	//Using no loop.
	simulator_startNewSmokeTrail();
	drive_goto(ticksToMove,ticksToMove);
	makeTurnLeftNR();
	
	simulator_startNewSmokeTrail();
	drive_goto(ticksToMove,ticksToMove);
	makeTurnLeftNR();
	drive_goto(-1,0); //Eliminate offset which exists in the top line.
	
	simulator_startNewSmokeTrail();
	drive_goto(ticksToMove,ticksToMove);
	makeTurnLeftNR();

	simulator_startNewSmokeTrail();
	drive_goto(ticksToMove,ticksToMove);

	//Show ticks at end.
	showTicks(0);
	//showTicks(abs(offsetVal));
}

//Make robot do a maneuvre so as to avoid the "semi-circle" problem. Found that the
//length of red-arrow is 11 ticks hence move forward 11 ticks cover gap, then backwards and turns left 90 degrees. Then adds 9 as the
//tail of the "smoke pipe" is approximately 9 ticks behind the line. 
void makeTurnLeftNR()
{
	drive_goto(11,11);
	drive_goto(-11,-11);
	
	simulator_stopSmokeTrail();

	drive_goto(-26,25);
	drive_goto(9,9);
}
