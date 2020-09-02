/*
 Problem statement :
3. Accept N numbers from user check whether that numbers contains 11 in 
it or not.
 
Input : N : 6 
Elements : 85 66 11 80 93 88 

Output : 11 is present
 
 
 */

#include<stdio.h>
#include<stdlib.h>



void Chkeleven(int[], int );

void Chkeleven(int arr[], int iSize)
{
    
    int iCnt = 0;
	int iAns=0;
	 
    
    for(iCnt = 0; iCnt < iSize; iCnt++)     
    {
            if(arr[iCnt]  == 11)        
            {
               iAns++;                         
            }
			
    }
    if (iAns != 0)
	{
		printf("11 is present\n");
	}
	else
	{
				printf("11 is absent\n");
	}
        
	
}

int main()
{
    int iValue = 0;
    int iCnt = 0;
    
    
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
    
	
	
	Chkeleven(ptr,iValue);       
    
    
    free(ptr);                      
    
	
    return 0;
}
























