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

int SumNonFact(int iNo)         // 12
{
    int iCnt = 0;    
	int iAns = 0;
    
    for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
    {
       if((iNo % iCnt) != 0)        
       {
              iAns = iAns + iCnt;
       }
    }
	
	return iAns;
}













