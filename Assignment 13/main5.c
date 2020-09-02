/*
 Problem statement :
5. Accept number from user and display below pattern. 
Input : 8 
Output : 2 4 6 8 10 12 14 16
 */
 

#include<stdio.h>
void Pattern(int) ;    

void Pattern(int iNo)      
{
    int i = 0; 
    for(i =1 ; i<= iNo; i++)           
    {
       if( i % 2==0)
	   {
        printf("%d \t", iNo*2);  
	   }
        
    }
}


int main()
{
    int iValue = 0;
    
    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
   
    Pattern(iValue);
    
    return 0;
}




