/*
 Problem statement :
2. Accept N numbers from user and return difference between frequency of 
even number and odd numbers. 
 
 Input : N : 7 
 Elements : 85 66 3 80 93 88 90 
 
Output : 1 (4 -3)
 
 
 */

#include<stdio.h>
#include<stdlib.h>

#define ERRSIZE -2

int CountEven(int[], int );

int CountEven(int arr[], int iSize)
{
    
    int iCnt = 0;
	int iEven =0;
	int iOdd =0;
	int iAns =0;
	
	
    if(iSize <= 0)        
    {
        return ERRSIZE;         
    }
    
    for(iCnt = 0; iCnt < iSize; iCnt++)     
    {
            if((arr[iCnt] % 2) == 0)        
            {
                iEven++;                            
            }
			else 
			{
				iOdd++;
			}
    }
    
	iAns= iEven - iOdd;
    return iAns;    
	
}

int main()
{
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;
    
    int *ptr = NULL;
    
    printf("Enter the value of N : ");
    scanf("%d",&iValue);
    
    ptr = (int *)malloc(4 * iValue);
    
    printf("Enter the values of array\n");
    for(iCnt = 0; iCnt<iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Your entered elements are\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    
	
	
	iRet = CountEven(ptr,iValue);       
    if(iRet == ERRSIZE)                   
    {
        printf("Error : Invalid size\n");
    }
    
    else                                          
    {
        printf("difference between frequency of even number and odd numbers : %d\n",iRet);
    }
    
    free(ptr);                      
    
	
	  return 0;
}
























