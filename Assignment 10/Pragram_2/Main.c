/*
Problem statement :
Write a program which accept width & height of rectangle from user and calculate 
its area. (Area = Width * Height)
 */


#include<stdio.h>
float AOR(float, float ) ;   



float AOR( float fHeight, float fWidth)                
{
                            
   
	float fAns= 0.0;
	
	fAns = fHeight * fWidth;
    
    return fAns;
}

// Entry point function
int main()
{
    float fValue1 = 0.0;  
	float fValue2 = 0.0; 	
    float fRet = 0.0;
    
    printf("Enter number\n");
    scanf("%f \n %f",&fValue1, &fValue2);
    
    fRet = AOR(fValue1, fValue2);
    
    printf("Area of Reactangle is : %f\n",fRet);
    
    return 0;       // Sucess to OS
}















