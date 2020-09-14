/*
    Problem statement :
  Write a program which accept one number and position from user and off 
that bit. Return modified number. 

Input : 10 2 
Output : 8
 
 */

#include<stdio.h>
int OffBit(int , int );

int OffBit(int iNo, int iPos)
{
    int iMask = 0X00000001;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iMask = iMask << (iPos -1);
    
    iResult = iNo & iMask;
   
   return iResult;
}
int main()
{
    int iNo = 0, iPos;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    printf("Enter the position\n");
    scanf("%d",&iPos);
        
    iRet = OffBit(iNo,iPos);
    
    printf("modified number %d \n", iRet);
    
    return 0;
}






















