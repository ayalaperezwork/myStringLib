#include<stdlib.h>
#include<stdio.h>
#include"myStringLib.h"

int main(void){
  char hexanum[] = "2b47";
  printf("The value hexadecimal is: %X\n", myatoiHex(&hexanum[0]));
  return 0;
}
       
