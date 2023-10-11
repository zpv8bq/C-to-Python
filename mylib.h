#ifndef MYLIB_H
#define MYLIB_H

#ifdef EXTERNC
extern "C" {
#endif

double findPi(long nthrows);

#ifdef EXTERNC
}
#endif

  
#endif // block to ensure header is only compiled once
