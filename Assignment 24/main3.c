/*
 Accept N numbers from user and return the difference between largest 
and smallest number. 

Input : N : 6 
Elements : 85 66 3 66 93 88 
Output : 90 (93 -3)
 */

#include<stdio.h>   // printf & scanf
#include<stdlib.h>  // for malloc


int Maximum(int arr [], int iSize)
{
    int iCnt =0;
    int iMax = 0;
	int iMin =0;
	int iAns =0;
    
    if(arr == NULL)
    {
        printf("Invalid address");
        return 0;       // return -1
    }
	
    if(iSize <= 0)         
    {
        printf("Invalid size\n");
        return 0;
    }
    
    iMax = arr[0];      
    
    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > iMax)    
        {
            iMax = arr[iCnt];   
        }
    }
	
	iMin = arr[0];      
    
    for(iCnt = 1; iCnt < iSize; iCnt++)     
    {
        if(arr[iCnt] < iMin)    
        {
            iMin = arr[iCnt];  
        }
    }
    
	iAns = iMax - iMin; 
    return iAns;                                 
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iCnt = 0;
    int *ptr = NULL;
    
    printf("Enter the value of N\n");
    scanf("%d",&iValue);                // 5
    
    if(iValue == 0)
    {
        printf("Error : Inavlid Input\n");
        return -1;
    }
    // ptr = (int*) malloc(4 * 5);      // Allocates 20 bytes of memory
    // (int *) is typecasting which is used to break the 20 bytes memory into 4 bytes chunk
    ptr = (int *)malloc(sizeof(int) * iValue);      // Return value of malloc is 100
    if(ptr == NULL)     // malloc returns NULL if memory allocation fails
    {
        printf("Error : Unable to allocate memory\n");
        return -1;      // Return erronious termination signal to the OS
    }
    
    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);     // Accept the calues from user and store into the array
    }
    
    iRet = Maximum(ptr,iValue);       // CountEven(100,5);
    
    printf("the difference between largest and smallest number. : %d\n",iRet);
    
    free(ptr);                      // Deallocate the dynamic memory which was allocated by malloc
    
    return 0;               // Return Successfull termination signal to OS
}
