/*  File: clz.c
    Team Member Responsible: Dajanek Davis
    Description: This program counts the leading zeros 
*/

#include "major1.h"
#define sizeLimit32 sizeof(int) * 32

void clz(int num)
{
   //Variables
   int n = 1;
   n <<= 31;                     
   int i; 
   int countofZeros = 0;          
    
    for(i=0; i<sizeLimit32; i++)  //indexing and iterating over bits
    {
        if((num << i) & n)      //If 1 is found STOP
        {
            break;                
        }
        countofZeros++;
    }
    
    printf("The number of leading zeros in %d is %d\n", num, countofZeros); //Display
}