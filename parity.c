/*  File: parity.c
    Team Member Responsible: Anika Chowdhury
    Description:
*/


#include"major1.h"
#include <stdio.h>
int parity (int a){
	int i, temp = 0;
	for (i = 0; i<32; ++i)
	{ 
	temp = temp + a%2 ;
        a = a/2;
	}
return temp %2;
}
