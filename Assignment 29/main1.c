/*  Write a program which accept string from user and accept one 
character. Check whether that character is present in string or not. 
Input : “Marvellous Multi OS” 
         e 
Output : TRUE

*/


#include<stdio.h>  
typedef int BOOL;                // New datatype as BOOLEAN treated as int

#define TRUE 1                      // User defined macro
#define FALSE 0  
    

BOOL ChkSpecial(char [], char);    


BOOL ChkSpecial(char str[], char ch)      
{
	int i=0;
	
	 while(str[i] != '\0')
    {
		
            if(str[i] == ch)
            {
                break;
            }
        i++;
      
	}
	
	if(str[i] == ch)
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
   char arr[30];
   char cValue = '\0';
   BOOL bRet = FALSE; 
	
	printf("Enter the string \n "); 
	scanf("%[^'\n']s",arr); 
	
	 
    printf("Please enter the character \n");
    scanf(" %c",&cValue);    
 
	bRet = ChkSpecial(arr, cValue); 
 
	if(bRet == TRUE) 
	{ 
     printf("character is present "); 
     } 
     else 
     { 
      printf(" character is not present"); 
      } 
 
     return 0;
 
 
	}