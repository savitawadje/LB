/*
 Problem statement :
 3. Accept number from user and display below pattern. 
Input : 5 
Output : 1 * 2 * 3 * 4 * 5 *
 */
 

#include<stdio.h>

void Pattern(int iNo)      
{
    int i = 0; 
    for(i =1 ; i<= iNo; i++)           
    {
       
        printf(" %d *\t", iNo);    
        
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




