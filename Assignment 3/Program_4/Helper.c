#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayFactor
//  Input : Interger
//  Output :    None
//  Description :   It is used to display the COnversition of alphabet into upper case
//  Autor : Piyush Manohar Khairnar
//  Date :  28th July 2020
//
//////////////////////////////////////////////////////////////

void DisplayConvert(char Ch)         
{
	if( isalpha(Ch))
	{
		Ch= toupper(Ch);
		printf(" upper case %c", Ch);
	}
	
	else
	{
		printf(" Enter valid alfabet");
	}
}















