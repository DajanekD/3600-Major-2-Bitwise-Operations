/*  File: endian.c
    Team Member Responsible: Joshua Thomas
    Course Section: CSCE 3600 Section 003
    Date: 10/14/21
    Description: The function in this file performs an endian swap operation on a 32-bit decimal integer input argument and outputs the result as a decimal value.
*/

#include "major1.h"

void endian(int num)
{
    int B0 = num & 0x000000FF; // Anding input number with all 1s in the rightmost byte to get the rightmost byte of the input number
    int B1 = num & 0x0000FF00; // Anding input number with all 1s in the middle right byte to get the middle right byte of the input number
    int B2 = num & 0x00FF0000; // Anding input number with all 1s in the left middle byte to get the left middle byte of the input number
    int B3 = num & 0xFF000000; // Anding input number with all 1s in the leftmost byte to get the leftmost byte of the input number

    B0 = B0 << 24; // Shift rightmost byte to become leftmost byte
    B1 = B1 << 8; // Shift middle right byte to become middle left byte
    B2 = B2 >> 8; // Shift middle left byte to become middle right byte
    B3 = B3 >> 24; // Shift leftmost byte to become rightmost byte

    int answer = B0 + B1 + B2 + B3; // Add the parts together to get the the endian swapped value
    printf("Endian swap of %d gives %d\n", num, answer); // print out the decimal version of the number

}