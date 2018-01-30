#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "abdrive.h"
#include "simpletext.h"
#include "simpletools.h"
#include "ping.h"

int main(int argc, const char* argv[])
{
  drive_speed(64, 64);

  while(ping_cm(8) > 8)
    {
      int irLeft = 0;
      for(int dacVal = 0; dacVal < 160; dacVal += 8) // read the left distance?
        {
          dac_ctr(26, 0, dacVal);
          freqout(11, 1, 38000);
          irLeft += input(10);
        }

      if (irLeft <= 8)
      {
        drive_speed((5 - irLeft) * 10, 34); // turn right
        //This still needs to be adjusted
      }
      else
      {
        drive_speed(34, (irLeft - 5) * 10);  // turn right
      }


      pause(100);


    }

  drive_speed(0, 0);

  return 0;
}
