/*
 Problem statement :
 Accept N numbers from user and accept Range, Display all elements from 
that range
 
Input : N : 6 
Start: 60 
 
End : 90 
 
Elements : 85 66 3 76 93 88

Output : 66 76 88
 */

#include<stdio.h>
#include<stdlib.h>



void Range(int [], int , int , int ) ;

void Range(int Arr[], int iLength, int iStart, int iEnd) 
{ 
	int iCnt =0;
	
   for ( iCnt=0; iCnt< iLength; iCnt++ )
   {
	   if( Arr[iCnt] < iStart && Arr[iCnt] > iEnd )
	   {
		   printf(" %d  ",Arr[iCnt]); 
	   }
   }
}

int main()
{
    int iSize = 0,
	iRet = 0,
	iCnt = 0, 
	iValue1 = 0,
	iValue2 = 0,
	iLength = 0; 
	
	
    int *p = NULL; 
	
	printf("Enter number of elements"); 
	scanf("%d",&iSize);
	
	printf("Enter the starting point"); 
   scanf("%d",&iValue1);
   
	printf("Enter the ending point"); 
	scanf("%d",&iValue2); 
	
	p = (int *)malloc(iSize * sizeof(int)); 
	
 
	printf("Enter elements ",iLength); 
	for(iCnt = 0;iCnt<iLength; iCnt++) 
	{ 
		printf("Enter element : %d",iCnt+1); 
		scanf("%d",&p[iCnt]); 
		} 
		
	printf("Your entered elements are\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t",p[iCnt]);
    }
	
     Range(p, iSize,iValue1, iValue2); 
 
      free(p);
	
	
                
    
	
	 return 0;
}




































