#include "mylib.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// here we check if the flag EXTERNC is set, if it is then
// we will tell the compiler to treat the code below a C code
// generating the library

#ifdef EXTERNC
extern "C" {
#endif

double findPi(long nthrows=100*1000*1000){
  srand48((long)time(NULL));
  long count=0;
  for (int i=0; i<nthrows; ++i){
    double x=drand48();
    double y=drand48();
    if (x*x+y*y < 1) ++count;
  }
  return 4.0*count/nthrows;
}

#ifdef EXTERNC
}
#endif

int main(){
  findPi();
  return 0;
} 
