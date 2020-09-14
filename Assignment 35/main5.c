/*
    Problem statement :
  Write a program which accept one number , two positions from user and 
check whether bit at first or bit at second position is ON or OFF. 


Input : 10 3 7 
Output : TRUE
 */

#include<stdio.h>
typedef int BOOL;
# define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo, int iPos1, int iPos2 )
{
    int iMask1 = 0x00000001;
	int iMask2 = 0x00000001;
    
    int iResult = 0, iResult2=0 ;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if((iPos < 1) || (iPos > 32))
    {
        return FALSE;
    }
    
    iMask1 = iMask1 << (iPos1 -1);
	iMask2 = iMask2 << (iPos2 -1)
    
    iResult = iNo & iMask1;
	iResult2 = iNo | iMask1;
    
    if((iResult == iMask1)  || (iResult2 == iMask2) )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iNo = 0, iPos1, iPos2;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    printf("Enter the position\n");
    scanf("%d",&iPos);
        
	printf("Enter the position\n");
    scanf("%d",&iPos2);
        	
    bRet = CheckBit(iNo,iPos1, iPos2);
    if(bRet == TRUE)
    {
        printf("Bit is on\n");
    }
    else
    {
        printf("Bits is Off\n");
    }
    return 0;
}


 

















