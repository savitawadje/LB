/*
 3. Accept N numbers from user and display all such elements which are 
even and divisible by 5. 
Input : N : 6 

 Elements : 85 66 3 80 93 88 
Output : 80
 
 
 */

#include<stdio.h>
#include<stdlib.h>

void DivNNumbers(int[], int );

void DivNNumbers(int arr[], int iSize)
{
    
    int iCnt = 0;
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
       if( (arr[iCnt]% 2) ==0 &&  (arr[iCnt]% 5) ==0)
	   {	   
	     printf(" %d",arr[iCnt]);
	   }
	 
	  
    }
	
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
    
	
	printf("Your entered elements divisible by 5  and even are\n \n");
    DivNNumbers(ptr,iValue); 
    
    
    
    return 0;
}
























