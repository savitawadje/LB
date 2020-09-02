/*
Problem statement :
 Write a program which accept distance in kilometre and convert it into meter. (1 
kilometre = 1000 Meter)
 */


#include<stdio.h>
float AOC(float ) ;   



float AOC( float fNo)                
{
                            
    
	float fAns= 0.0;
	
	fAns =  fNo * 1000;
    
    
    
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
    
    printf("Distance in meter. : %f\n",fRet);
    
    return 0;       // Sucess to OS
}















