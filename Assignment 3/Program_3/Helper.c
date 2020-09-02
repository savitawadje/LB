#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayFactor
//  Input : Interger
//  Output :   Interger
//  Description :   It is used to display the Even  factors
//  Autor : Savita Wadje
//  Date :  31th July 2020
//
//////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;                        
    
    for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
    {
       if( (iNo % iCnt) == 0 && (iCnt%2) == 0  )      // 4
       {
               printf("%d\n",iCnt);
       }
    }
}













