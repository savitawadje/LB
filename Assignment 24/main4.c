/*
    Accept N numbers from user and display all such numbers which contains 
3 digits in it. 


Input : N : 6
 Elements : 8225 665 3 76 953 858 
 
 
Output : 665 953 858
 
 */
#include<stdio.h>
#include<stdlib.h>

void SumDigits(int arr[], int iSize)
{
    int iCnt = 0 , iNo = 0, i = 0;
    int iSum = 0, iDigit = 0;
    
    if(arr == NULL)
    {
        return;
    }
    if(iSize <= 0)
    {
        return;
    }
    
    printf(" Numbers which contains 3 digits in it. : \n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iNo = arr[iCnt];
       
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if ( iDigit== 3)
			{
			 printf(" %d \n", arr[iCnt] );
			}
            iNo = iNo / 10;
        }
        
       
    }
}

int main()
{
    int *ptr = NULL;
    int iValue = 0;
    int iCnt = 0;
    
    printf("Enter the number of elemnts\n");
    scanf("%d",&iValue);
    
    if(iValue == 0)
    {
        return -1;
    }
    
    ptr = (int *)malloc(sizeof(int) * iValue);
    if(ptr == NULL)
    {
        return -1;
    }

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    SumDigits(ptr,iValue);
    
    free(ptr);
    
    return 0;
    
}







