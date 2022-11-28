#include<stdlib.h>
#include<stdio.h>
#include"myStringLib.h"

int main(void){
  char cadena1[] = {"apple"};
  char cadena2[] = {"apple"};

  printf("Comparisson result: %d\n", mycmp(&cadena1[0], &cadena2[0]));

  return 0;
}  
