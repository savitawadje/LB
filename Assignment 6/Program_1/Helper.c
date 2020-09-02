#include "Header.h"

void    DisplayDigits(int iNo)                
{                          
    int iDigit = 0;    

	if(iNo < 0) 
	{ 
		iNo = -iNo; 
	}
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
		printf("%d \n", iDigit);
           
        iNo = iNo / 10;
    }
    
    
}









