/*  
File: rotate.c

Team Member Responsible: Christopher Collins

Description:This codes main purpose is to perform the rotation operation using the two integer operands passed to
this function. The first integer operand is the number to be rotated. The second
integer operand is the number of bit positions that the first operand must be
rotated by.
*/

#include "major1.h"


void RightRotation(int num, int b)
{
int bit;//temp variable
int tmp = num;
b %= INT_BITS;
int tab = b;
while(b >= 1)//Measuring how many bits it needs to shift as it needs to shift everything
     {
     b--;
     bit = num & 1;//Does a bitwise AND operation of the k variable and the 1. The expression results in either 0 or 1.
     //printf("%d", bit); This converts bit to binary
     num = (num >> 1) & (~(1 << INT_BITS));
     //Shifts the digits to the right
     num = num | bit << INT_BITS;
     //num = (num & 1) << INT_BITS;
     }
  printf("%d rotated by %d position gives: %d \n", tmp, tab, num);
}
