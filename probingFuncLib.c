#include<stdio.h>
#include<stdlib.h>
#include"myStringLib.h"

// Function to copy the string 'source' to the string 'target'
// limited by 'edge' char

int main (void){
  char fuente[]  = "superappletonas";
  char destino[17];
  int  limit = 5;
  
  printf("Result code = %d \n", mycpy(&fuente[0], &destino[0], limit));
  printf("String: %s \n", destino);
  
  return 0;
}
