#include<stdio.h>
#include<stdlib.h>

// Function to copy the string 'source' to the string 'target'
// limited by 'edge' chars
int mycpy(char * source, char * target, int edge){
  // Initializing variablrs
  char * limit = target + edge;
  int count = 0;

  // repeat while don't reach the last char or the target limit
  while((*source != '\0') && (target < limit)){
    *target = *source;
    target++;
    source++;     
  }
  *target = '\0';
  if((target == limit) && (*source != '\0')) return 2;
  else return 0;
}

int main (void){
  char fuente[]  = "superappleton";
  char destino[10];
  int  limit = 9;
  
  printf("Result code = %d \n", mycpy(&fuente[0], &destino[0], 9));
  printf("String: %s \n", destino);
  
  return 0;
}
