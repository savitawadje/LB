/*
Problem statement :
 .Write a program which accept accept range from user and display all numbers in 
between that range in reverse order.
 */


#include<stdio.h>
void Range(int, int ) ;   



void Range( int istart, int iend)                
{
	
    int cnt =0;
	
    for ( int cnt = iend; cnt > istart; cnt-- )
		{
			
			printf("%d\n",cnt);
			
		}
    
  
   
}

// Entry point function
int main()
{
    int iValue1 = 0; 
	int iValue2 = 0;
	
  
    
    printf("Enter arnge\n");
    scanf("%d %d ",&iValue1 , &iValue2);
    
    Range(iValue1, iValue2);
    
   
    
    return 0;       // Sucess to OS
}















