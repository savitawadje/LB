/*
Problem statement :
.Write a program which accept range from user and display all numbers in between 
that range.
 */


#include<stdio.h>
void Range(int, int ) ;   



void Range( int iNo1, int iNo2)                
{
	int istart =iNo1;
	int iend = iNo2;
    int cnt =0;
	
    for ( int cnt = istart; cnt < iend; cnt++ )
		{
			printf("%d",cnt);
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















