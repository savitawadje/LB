 


 


 /*
    Problem statement :
Write a program which accept one number from user and on its first 4 
bits. Return modified number.


Input : 73 
Output : 79



 */
#include<stdio.h>


int ChangeBit(int iNo)
{
    int iMask = 0X00000008;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
	
    iResult = iNo | iMask;
    
    return iResult;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
   iRet= ChangeBit(iNo);
    
    printf("modified number is %d \n",iRet);
   
    return 0;
}



















