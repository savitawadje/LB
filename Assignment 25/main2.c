/*
 Problem statement :
 
Accept Character from user and check whether it is capital or not 
(A-Z). 

Input : F 
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
    if( ch >=65 && ch<= 90 )
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
 printf("It is  Captal Character"); 
 } 
 else 
 { 
 printf("It is not a Captal Character"); 
 } 
 
 return 0;
}






