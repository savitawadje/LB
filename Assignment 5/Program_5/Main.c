/*
Write a program which accept total marks & obtained marks from user and 
calculate percentage.
 */

#include "Header.h"

int main()      // Entry point function
{
   int iValue1 =0;
	int iValue2 =0;
	
	float fRet = 0.0;
	
	printf("Please enter total marks"); 
	scanf("%d",&iValue1); 
   
	printf("Please enter obtained marks"); 
	scanf("%d",&iValue2);
	
	fRet =  Percentage(iValue1, iValue2);
	
	printf(" Aggrigate of result %.2f%%",fRet);
	
	return 0;
}
