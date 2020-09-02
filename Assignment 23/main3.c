/*
 Problem statement :
 Accept N numbers from user and accept one another number as NO , 
return index of last occurrence of that NO. 

Input : N : 6 
NO: 66 
Elements : 85 66 3 66 93 88
 
 */

#include<stdio.h>
#include<stdlib.h>



void FirstOcc(int[], int, int );

void FirstOcc(int arr[], int iSize , int iNo)
{
    
    int iCnt = 0;
	int iAns =0;
	
	
    for(iCnt = iSize; iCnt > 0; iCnt--)     
    {
            if((arr[iCnt]) == iNo)        
            {
               printf("Index of Last occurrence of that NO : %d\n",iCnt);                             
            }
    }
    
        
	
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
    
	
	
	FirstOcc(ptr,iValue, iValue1);       
    
    free(ptr);                      
    
	
	 return 0;
}



























































