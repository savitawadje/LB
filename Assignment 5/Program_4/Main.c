/*
 Problem statement : Write a program which display 1 to 5 on screen.
 */

#include "Header.h"

int main()      // Entry point function
{
    int iValue1 =0;
	int iValue2 =0;
	int iValue3 =0;
	
	int iRet = 0;
	
	printf("Please enter three numbers "); 
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);
	
	iRet = Multiply(iValue1, iValue2, iValue3);
	
	printf(" MUltifiction of number  %d ", iRet);
	
	return 0;
	
}
