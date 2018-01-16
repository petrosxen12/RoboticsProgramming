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

static void showTicks(int calibration)
{
  int left, right;
  drive_getTicks(&left, &right);
  print("%d %d\n", left+calibration, right+calibration);
}

int metersToTicks(int meters){
  int milimeters = meters*1000;
  int mmToTicks = milimeters/3.25;
  return mmToTicks;
}


int main(int argc, const char* argv[])
{	
	int offsetVal = -120;
	//Start
	drive_goto(offsetVal,offsetVal); //Offset 
   drive_goto(307,307); //Drive one meter 

   //Turn 90 Degrees
   drive_goto(51,0);
   showTicks(abs(offsetVal));
}

