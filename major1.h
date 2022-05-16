/*  Group 10
    Group Members: Anika Chowdhury, Christopher Collins, Dajanek Davis, Joshua Thomas
    Project: Major Assignment 1 - GitLab and Bitwise Operators
    Course Section: CSCE 3600 Section 003
    Date: 10/14/21
    Description: This header file holds the function definitions for our operations and printMenu
*/

#include <stdio.h>

#define INT_BITS 31

/* Function Nam: printMenu
    Parameters: NONE
    Return: NONE
    Description: This function prints the main menu for the program.
*/

void printMenu();

// FUNCTION PROTOTYPES CAN GO BELOW HERE
int parity (int x);

/* Function Name: endian
    Parameters: int for the 32-bit decimal number to be operated on
    Return: NONE
    Description: This function performs an endian swap operation on a 32-bit decimal integer input argument and outputs the result as a decimal value.
*/
void endian(int num); 

/* Function Name: clz
    Parameters: int for the 32-bit decimal number to be operated on
    Return: NONE
    Description: This function will count the leading zeros of a 32 bit integer.
*/
void clz(int num);


/* Function Name: RotateRight
    Parameters: 2 intergers. One of them is unsigned
    Return: NONE
    Description: This function will rotate the bits of a number to the right
    direction depending on how much the user desires.
*/

void RightRotation(int num, int b);

