#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayFactor
//  Input : Interger
//  Output :    None
//  Description :   It is used to display the factors
//  Autor : Piyush Manohar Khairnar
//  Date :  28th July 2020
//
//////////////////////////////////////////////////////////////

int  FactDiff(int iNo)         
{
    int iCnt = 0;
	int iAns = 0;
	int iAns1 = 0;
	int iAns2 = 0;
    
    for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
    {
       if((iNo % iCnt) == 0)       
       {
               iAns1 = iAns1 + iCnt;
       }
	   else if ( (iNo % iCnt) != 0)
	   {
		    iAns2 = iAns2 + iCnt;
	   }   
    }
	
	iAns = iAns1 - iAns2; 
	
	return iAns;
}












