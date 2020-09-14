/*
 Problem statement :
 
Accept Character from user and check whether it is digit or not 
(0-9). 

Input : 7 
Output : TRUE 

Input : d 
Output : FALSE
*/


#include<stdio.h>
typedef int BOOL;                // New datatype as BOOLEAN treated as int

#define TRUE 1                      // User defined macro
#define FALSE 0  

BOOL ChkAlpha(char);    


BOOL ChkAlpha(char ch)      
{
    if( ch >=48 && ch<= 57)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}


int main()
{
     char cValue = '\0'; 
	BOOL bRet = FALSE; 
	
	printf("Enter the character \n"); 
    scanf("%c",&cValue); 
    bRet = ChkAlpha(cValue); 
	
 if(bRet == TRUE) 
 { 
 printf("It is a digit"); 
 } 
 else 
 { 
 printf("It is not a digit"); 
 } 
 
 return 0;
}






