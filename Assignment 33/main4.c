 


 /*
    Problem statement :
  Write a program which accept one number from user and toggle 7th and 
10th bit of that number. Return modified number. 


Input : 137
Output : 713
 
 */
#include<stdio.h>


int  ToggleBitBit(int iNo)
{
    int iMask = 0X00000240;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
	
    iResult = iNo ^ iMask;
    
    return iResult;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
   iRet=  ToggleBit(iNo);
    
    printf("modified number is %d \n",iRet);
   
    return 0;
	
}














