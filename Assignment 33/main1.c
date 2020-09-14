 /*
    Problem statement :
Write a program which accept one number from user and off 7th bit of that 
number if it is on. Return modified number. 


Input : 79 
Output : 15


 */
#include<stdio.h>


int ChangeBit(int iNo)
{
    int iMask = 0X00000040;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
	
    iResult = iNo & iMask;
    
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













