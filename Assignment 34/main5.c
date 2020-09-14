/*
 Write a program which accept one number from user and toggle contents 
of first and last nibble of the number. Return modified number. (Nibble is a 
group of four bits)
 
 */

#include<stdio.h>


int ToggleBit(int iNo)
{
    int iMask = 0x10000001;
    
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






















