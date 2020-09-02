/*
Problem statement :
 Write a program which accept temperature in Fahrenheit and convert it into 
celsius. (1 celsius = (Fahrenheit -32) * (5/9))
 */


#include<stdio.h>
float TempC(float ) ;   



float TempC( float fNo)                
{
                            
    
	float fAns= 0.0;
	
	fAns =  (fNo-32) * (5/9);
    
    return fAns;
}

// Entry point function
int main()
{
    float fValue = 0.0;             
    float fRet = 0.0;
    
    printf("Enter number\n");
    scanf("%f",&fValue);
    
    fRet = TempC(fValue);
    
    printf("Temperature in  celsius: %f\n",fRet);
    
    return 0;       // Sucess to OS
}















