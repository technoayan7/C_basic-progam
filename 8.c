/* C Program to Calculate Square of a Number */
 
#include<stdio.h>
#include <math.h>

 
int main()
{
  int number, Square, cube;
 
  number = 5;
  
  Square = number * number;
  cube = pow(number,3);
  printf("\n Square of a given number %d is  =  %d", number, Square);
  printf("\n Cube of a given number %d is  =  %d", number, cube);
 
  return 0;
}