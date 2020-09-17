#include "Header.h"

BOOL ChkPalindrome(char *Str)
{
    BOOL bRet = TRUE;
    int icnt=0;

    
    char *first,*last;
    first =  Str;
    last = Str;
	
	while(  *str= '\0')
	{
		 
	  if(*str>=65  && *str <=90 ) 
		{
           *str = *str + 32;
        }
	  str++;
		 
    }	
     
    while(*last != '\0'){
    	last++;
    }
  	last--;
 
	while(first <= last) 
	{ 
	
		if (*first != *last)
		{
			icnt= 1;
			break;
		}
	
	 first++;
	 last--;
	 
	}
 
	if( icnt == 0 ) 
	{ 
	 return TRUE;
	} 
	else 
	{ 
	  return FALSE; 
	} 
  	
  		
  		
  	
 }
