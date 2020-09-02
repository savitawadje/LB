/*
Problem statement :
 Write a program which accept range from user and return addition of all numbers 
in between that range. (Range should contains positive numbers only)
 */


#include<stdio.h>
int Mul(int, int ) ;   



int Mul( int iNo1, int iNo2)                
{
	int istart =iNo1;
	int iend = iNo2;
    int cnt =0;
	int ans=1;
	
	
    for ( int cnt = istart; cnt < iend; cnt++ )
		{
			ans = ans* cnt;
		}
    
  return ans;
   
}

// Entry point function
int main()
{
    int iValue1 = 0; 
	int iValue2 = 0;
	int iRet= 0;
  
    
    printf("Enter arnge\n");
    scanf("%d \n %d ",&iValue1 , &iValue2);
    
    iRet= Mul(iValue1, iValue2);
    printf("Multiflication of range\n %d", iRet);
   
    
    return 0;       // Sucess to OS
}















