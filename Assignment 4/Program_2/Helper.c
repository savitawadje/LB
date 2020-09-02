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

void DisplayFactor(int iNo)         // 12
{
    int iCnt = 0;                        
    
    for( iCnt = iNo ; iCnt >0  ; iCnt-- )
    {
       if((iNo % iCnt) == 0)        // 4
       {
               printf("%d\n",iCnt);
       }
    }
}












