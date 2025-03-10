/*
  main.cpp
  simple test program to exercise the intrinsic data elements of c/c++
*/ 
#include <stdio.h>
#include <stdint.h>

int main(int argc, const char *argv[])
{
  int32_t  x = 5 ;
  int16_t  y = 1 ;

  printf( "int32_t is held in %ld bytes\n", sizeof(x) ) ;
  printf( "int16_t is held in %ld bytes\n", sizeof(y) ) ;
  
  return 0 ;
} // :: main


