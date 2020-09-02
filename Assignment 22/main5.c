/*
 Problem statement :
 Accept N numbers from user and accept one another number as NO , 
return frequency of NO form it.

Input : N : 6 
Elements : 85 66 3 66 93 88 
NO: 66 

Output : 2
 
 */

#include<stdio.h>
#include<stdlib.h>

#define ERRSIZE -2

int CountNo(int[], int, int );

int CountNo(int arr[], int iSize , int iNo)
{
    
    int iCnt = 0;
	int iAns =0;
	
	
    if(iSize <= 0)        
    {
        return ERRSIZE;         
    }
    
    for(iCnt = 0; iCnt < iSize; iCnt++)     
    {
            if((arr[iCnt]) == iNo)        
            {
                iAns++;                            
            }
    }
    
    return iAns;    
	
}

int main()
{
    int iValue = 0;
	    int iValue1 = 0;
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
     
	printf("Enter the number : \n");
    scanf("%d",&iValue1);
    
	
	
	iRet = CountNo(ptr,iValue, iValue1);       
    if(iRet == ERRSIZE)                   
    {
        printf("Error : Invalid size\n");
    }
    
    else                                          
    {
        printf("Number of frequency of selected are : %d\n",iRet);
    }
    
    free(ptr);                      
    
	
	 return 0;
}
























