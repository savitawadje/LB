/*
Write a program which accept one number and position from user and 
toggle that bit. Return modified number. 

Input : 10 3 
Output : 14
 
 */

#include<stdio.h>


int ToggleBit(int iNo, int iPos)
{
    int iMask = 0x00000001;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if((iPos < 1) || (iPos > 32))
    {
        return;
    }
    
    iMask = iMask << (iPos -1);
    
    iResult = iNo ^ iMask;
   
   return iResult;
}
int main()
{
    int iNo = 0, iPos;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    printf("Enter the position\n");
    scanf("%d",&iPos);
        
    iRet = ToggleBit(iNo,iPos);
    
    printf("modified number %d \n", iRet);
    
    return 0;
}






















