/*
Problem statement :
 Write a program to find odd factorial of given number and display multi.
 */


#include<stdio.h>
int  MulofEvnFact(int )  ;   



int MulofEvnFact(int iNo)         // 12
{
    int iCnt = 0;    
	int iAns = 1;
    
    for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
    {
       if((iCnt % 2) != 0)        
       {
              iAns = iAns * iCnt;
       }
    }
	
	return iAns;
}


// Entry point function
int main()
{
    int iValue = 0;
	int iRet =0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet =  MulofEvnFact(iValue); 
    printf("%d",iRet);     // Function call    Dukanat ja	
    
    return 0;// Sucess to OS
}















