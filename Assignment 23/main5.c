/*
 Problem statement :
  Accept N numbers from user and return product of all odd elements. 
Input : N : 6 
 
Elements : 15 66 3 70 10 88 
Output : 45
 
 */

#include<stdio.h>
#include<stdlib.h>



int FirstOcc(int[], int );

int FirstOcc(int arr[], int iSize )
{
    
    int iCnt = 0;
	int iAns =1;
	
	
    for(iCnt = 0; iCnt < iSize; iCnt++)     
    {
            if((arr[iCnt]%2) != 0)        
            {
			   iAns = iAns* arr[iCnt];                             
            }
    }
    
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
     

	
	iRet= FirstOcc(ptr,iValue);   

    printf("product of all odd elements %d\n", iRet);    
    
    free(ptr);                      
    
	
	 return 0;
}




































