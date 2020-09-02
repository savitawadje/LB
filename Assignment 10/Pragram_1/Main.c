/*
Problem statement :
Write a program which accept radius of circle from user and calculate its area. 
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
 */


#include<stdio.h>
float AOC(float ) ;   



float AOC( float fNo)                
{
                            
    float pi = 3.14; 
	float fAns= 0.0;
	
	fAns = pi* fNo * fNo;
    
    
    
    return fAns;
}

// Entry point function
int main()
{
    float fValue = 0.0;             
    float fRet = 0.0;
    
    printf("Enter number\n");
    scanf("%f",&fValue);
    
    fRet = AOC(fValue);
    
    printf("Area of circle is : %f\n",fRet);
    
    return 0;       // Sucess to OS
}















