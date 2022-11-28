#include<stdio.h>
#include<stdlib.h>
#include"myStringLib.h"

int main(void){
  
  char stringnumber[] = {"13495"};

  printf("The number from string to int is: %X\n", myatoi(&stringnumber[0]));

  return 0;

}
