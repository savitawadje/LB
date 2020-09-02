/*
 Problem statement :
 Accept N numbers from user and return frequency of 11 form it. 

Input : N : 6 
Elements : 85 66 3 15 93 88 

Output : 0
 
 
 */

#include<stdio.h>
#include<stdlib.h>

#define ERRSIZE -2

int CountEleven(int[], int );

int CountEleven(int arr[], int iSize)
{
    
    int iCnt = 0;
	int iEven =0;
	
	
    if(iSize <= 0)        
    {
        return ERRSIZE;         
    }
    
    for(iCnt = 0; iCnt < iSize; iCnt++)     
    {
            if((arr[iCnt]) == 11)        
            {
                iEven++;                            
            }
    }
    
    return iEven;    
	
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
    
	
	
	iRet = CountEleven(ptr,iValue);       
    if(iRet == ERRSIZE)                   
    {
        printf("Error : Invalid size\n");
    }
    
    else                                          
    {
        printf("Number of frequency of 11 are : %d\n",iRet);
    }
    
    free(ptr);                      
    
	
	  return 0;
}
























