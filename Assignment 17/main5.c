/*
 Problem statement :
 
3. Accept number of rows and number of columns from user and display below 
pattern. 

Input : iRow = 6 iCol = 5

Output : 

 Output : 
 
 1 2 3 4 
 1 * * 4 
 1 * * 4 
 1 2 3 4
 
*/

#include<stdio.h>
void Pattern(int , int );  



void Pattern(int iRow, int iCol)        
{
    int i = 0, j = 0;
   
    for(i = 1; i<= iRow; i++)           
    {
      
        for(j = 1; j<= iCol; j++)       
        {
			
			if(i==1 ||  j==1 || j== 4 || i== 4)
			{
				
              printf("%d\t",j); 
			
			}
		
			
			else 
			{
			 printf("*\t"); 
			
			}
			
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






