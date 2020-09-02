/*
Problem statement :
  Accept on character from user and check whether that character is vowel 
(a,e,i,o,u) or not.
 
 Input : c        Output :   alphabet is not owel
*/



#include "Header.h"

int main()          // Entry point function
{
    char cValue = '\0';
	BOOL bRet = FALSE;
    
    printf("Enter Alphabet\n");
    scanf("%c",&cValue);
    
    bRet= DisplayOwel(cValue); 

	if(bRet ==TRUE)
	{
		printf(" its a owel");
	}
    
	else 
	{
		printf(" its not a owel");
	}
	
    return 0;
}















