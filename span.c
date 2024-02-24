#include <stdio.h> 
#include <string.h> 
  
int main () { 
   int len = strspn("geeks for gghh","for geeks for ygyghh"); 
   printf("Length of initial segment matching : %d\n", len );     
   return(0); 
} 
