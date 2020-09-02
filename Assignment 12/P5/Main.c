/*
Problem statement :
  Write a program which returns difference between Even factorial and odd factorial 
of given number.
 */


#include<stdio.h>
int  DiffOddEvnFact(int )  ;   



int DiffOddEvnFact(int iNo)         // 12
{
    int iCnt = 0;    
	int iAns1 = 1;
	int iAns2 = 1;
	int iAns=0;
    
    for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
    {
		
		if((iCnt % 2) == 0)        
       {
              iAns1 = iAns1 *iCnt;
       }  
	   
       else       
       {
              iAns2 = iAns2 * iCnt;
       }
    }
	
	iAns = iAns1 - iAns2;
	return iAns;
}


// Entry point function
int main()
{
    int iValue = 0;
	int iRet =0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet =  DiffOddEvnFact(iValue); 
    printf("%d",iRet);     // Function call    Dukanat ja	
    
    return 0;// Sucess to OS
}















