#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : CountEvenDigits
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to count number of even digits
//  Autor : Piyush Manohar Khairnar
//  Date :  3rd August 2020
//
//////////////////////////////////////////////////////////////

int MultDigits(int iNo)          
{
    int mul = 1;                          
    int iDigit = 0;      
	
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
		mul = mul * iDigit;
        
        iNo = iNo / 10;
    }
    
    return mul;
}









