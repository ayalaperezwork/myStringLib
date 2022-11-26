#include "myStringLib.h"

// Function to copy the string 'source' to the string 'target'
// limited by 'edge' chars
int mycpy(char * source, char * target, int edge){
  
  // Initializing variables
  char * limit = target + edge;

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

int mycmp(char * str1, char * str2){}

int myatoi(cons char * str){}

int myatoiHex(const char * str){}

long mystrtol(const char * str, char ** endptr, int base){}

