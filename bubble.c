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

void swap(int *a ,int *b){
  int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}
void bubble(){
  int numOfElement;
  print("Pls enter the number of element u want to sort");
  scanf("%d", &numOfElement);
  int a[numOfElement];
  print("Pls enter the elements u want to sort\n");
  for(int k = 0;k < numOfElement;k++){
    scanf("%d",&a[k]);
  }
  for (int index = 0;index < numOfElement-1;index++){
    for (int j = 0;j < numOfElement-1;j++){
      if(a[j] > a[j+1]){
        swap(&a[j],&a[j+1]);
      }
    }
    for (int i = 0;i < numOfElement;i++){
      print("%d ",a[i]);
    }
    print("\n");
  }

}

int main(){
  bubble();
  return 0;

}
