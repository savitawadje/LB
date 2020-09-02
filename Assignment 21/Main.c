/*
 Problem statement :
Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
 
 Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)

 
 
 */

#include<stdio.h>
#include<stdlib.h>

int SumNNumbers(int[], int );

int SumNNumbers(int arr[], int iSize)
{
    int iSum1 = 0;
	int iSum2 = 0;
	int iSum = 0;
	
    int iCnt = 0;
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
       if( iCnt%2 ==0 )
	   {	   
	     iSum1 = iSum1 + arr[iCnt];
	   }
	   else 
	   {
		   iSum2 = iSum2 + arr[iCnt];
	   }
	  
    }
	
    iSum = iSum1 - iSum2;  
	
    return iSum;
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
    //      1               2               3
    for(iCnt = 0; iCnt<iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Your entered elements are\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    
    iRet = SumNNumbers(ptr,iValue); // SumNNumbers(100,5);
    
    printf("\nAddition of all numbers is :; %d\n",iRet);
    
    return 0;
}
























