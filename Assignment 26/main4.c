/* Accept Character from user and check whether it is special symbol 
or not (!, @, #, $, %, ^, &, *).

Input : % 
Output : TRUE 

Input : d 
Output : FALSE
33 42
*/

#include<stdio.h>  
typedef int BOOL;                // New datatype as BOOLEAN treated as int

#define TRUE 1                      // User defined macro
#define FALSE 0  
    

BOOL ChkSpecial(char);    


BOOL ChkSpecial(char ch)      
{
	
    if( ch >=33 && ch<= 42 )
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
   char cValue = ‘\0’; 
   BOOL bRet = FALSE; 
	
	printf("Enter the character"); 
	scanf("%c",&cValue); 
 
	bRet = ChkSpecial(cValue); 
 
	if(bRet == TRUE) 
	{ 
 printf("It is special Character"); 
 } 
 else 
 { 
 printf("It is not a special Character"); 
 } 
 
 return 0;
 
 
	}