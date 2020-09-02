/*
Problem statement :
. Accept amount in US dollar and return its corresponding value in Indian currency. 
Consider 1$ as 70 rupees.
 */


#include<stdio.h>
int DtoR(int ) ;   



int DtoR( int iNo)                
{
                            
    
	int iAns= 0;
	
	iAns =  iNo * 70;
    
   
    return iAns;
}

// Entry point function
int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = DtoR(iValue);
    
    printf("Dollar to rupeeee: %d\n",iRet);
    
    return 0;       // Sucess to OS
}















