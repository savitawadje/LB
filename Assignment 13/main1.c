/*
 Problem statement :
 
Accept number from user and display below pattern. 
Input : 5 
Output : A B C D E
*/


#include<stdio.h>

void Pattern(int iNo)      
{
    int i = 0; 
    for(i =0 ; i<= iNo-1; i++)           
    {
       
        printf(" %c\t", i+65);    
        
    }
}


int main()
{
    int iValue = 0;
    
    printf("Enter number of rows\n");
    scanf("%d",&iValue);
   
    Pattern(iValue);
    
    return 0;
}






