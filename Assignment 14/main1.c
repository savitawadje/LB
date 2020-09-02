/*
 Problem statement :
 Write a program which accept number from user and display below pattern:
 
 Input :   (Row = 4 Columns = 4)
Output :
 
 *  *   *   *
 *  *   *   *
 *  *   *   *
 *  *   *   *
 
Input :    4, 5    ->  (Row = 4 Columns = 5)
Output :
  
  *  *   *   *  *
  *  *   *   *  *
  *  *   *   *  *
  *  *   *   *  *
*/

#include<stdio.h>

void Pattern(int , int ) ;  

void Pattern(int iRow, int iCol)        
{
    int i = 0, j = 0;
    
   
    for(i = 1; i<= iRow; i++)           
    {
      
        for(j = 1; j<= iCol; j++)       
        {
            printf("*\t");    
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, 
	iValue2 = 0;
    
    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);
    
    Pattern(iValue1, iValue2);
    
    return 0;
}






