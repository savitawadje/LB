/*
 Problem statement :
  Accept number from user and display below pattern.
 
 Input : 5 
Output : 5 # 4 # 3 # 2 # 1 #
 
 */
 

#include<stdio.h>

void Pattern(int iNo)      
{
    int i = 0; 
    for(i =iNo ; i<= 1; i--)           
    {
       
        printf(" %d #\t", iNo);    
        
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




