/*
Problem statement :
Write a program which accept number from user and display below pattern.
 */


#include<stdio.h>
void Pattern(int ) ;   



void Pattern( int iNo)                
{
	
    int cnt =0;
	
    for ( int cnt = 0; cnt < iNo ; cnt++ )
		{
			printf(" *");
		}
    for ( int cnt = 0; cnt < iNo ; cnt++ )
		{
			printf(" #");
		}
  
   
}

// Entry point function
int main()
{
    int iValue = 0; 
	
  
    
    printf("Enter arnge\n");
    scanf("%d  ",&iValue);
    
    Pattern(iValue);
    
   
    
    return 0;       // Sucess to OS
}















