/*
Problem statement :
 Write a program which accept number from user and display its multiplication of 
factors.
 
 Input : 12 
Output : 144 (1 * 2 * 3 * 4 * 6)
*/



#include "Header.h"

int main()          // Entry point function
{
    int iValue = 0;
	int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
   iRet = MultFact(iValue);      // Function call    Dukanat ja	
   
   printf("%d",iRet);
    
    return 0;
}















