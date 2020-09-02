#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : PrintEven
//  Input : Interger
//  Output :   Integer
//  Description :   It is used to display the print that number of even numbers on screen.
//  Autor :   Savita Wadje
//  Date :  31th July 2020
//
//////////////////////////////////////////////////////////////



void PrintEven(int iNo) 
{ 

int iCnt = 0;    

 if(iNo < 0) 
 { 
  iNo = -iNo;
 } 
 
  for( iCnt = 1 ; iCnt <=iNo ; iCnt++ )
    {
       if((iCnt % 2) == 0)        
       {
               printf("%d\n",iCnt);
       }
	  
    }
 
}








