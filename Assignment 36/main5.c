/*
    Problem statement :
 Accept string from user and check whether the string is palindrome 
or not without considering its case. 
 
Input : “1abccBA1” 
Output : TRUE
 */

#include<stdio.h>
typedef int BOOL;
# define TRUE 1
#define FALSE 0

BOOL StrPallindrome(char *str) 
{ 
  
 int icnt=0;
 char *first,*last; 
 
 first = str; 
 last = str;
 
 while(  *str= '\0')
  {
		 
		  if(*str>=65  && *str <=90 ) 
		  {
           *str = *str + 32;
         }
	str++;
		 
  }	
  
 while(*last != '\0') 
 { 
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

int main() 
{ 
 BOOL bret= FALSE; 
 char arr[20]; 
 
  printf("Please enter first string\n");
  scanf("%[^'\n']s",arr);
    
  
 bret = StrPallindrome(arr); 
 
 if(bret == TRUE) 
 { 
 printf("String is pallindrome\n"); 
 } 
 else 
 { 
 printf("String is not pallindrome\n"); 
 } 
 return 0; 
 
 
}





























